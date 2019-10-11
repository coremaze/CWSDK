#ifndef MSVC_LIST_H
#define MSVC_LIST_H
#include <iostream>
#include <stdexcept>
#include <cstdint>
#include <windows.h>
#include "allocator.h"

namespace msvc {
    template <typename T>
    struct list {

        class node {
            public:
            msvc::list<T>::node *next;
            msvc::list<T>::node *prev;
            T data;

            node() {
                this->next = nullptr;
                this->prev = nullptr;
            }
            node( msvc::list<T>::node *prev,  msvc::list<T>::node *next, T data) {
                this->next = next;
                this->prev = prev;
                this->data = data;
            }

        };

	public:
		typedef size_t size_type;
		typedef T value_type;
		typedef T& reference;
		typedef T* pointer;

		// forward iterator
		class iterator {
		public:
			typedef iterator self_type;
			typedef int difference_type;
			typedef std::forward_iterator_tag iterator_category;

			iterator() {}
			iterator(msvc::list<T>::node* ptr) : list_node(ptr) { }

			self_type operator=(const self_type& other) { list_node = other.list_node; return *this; }
			self_type operator++() { list_node = list_node->next; return *this; } // ++i
			self_type operator++(int junk) { self_type i = *this; list_node = list_node->next; return i; } // i++
			self_type operator--() { list_node = list_node->prev; return *this; }
			self_type operator--(int junk) { self_type i = *this; list_node = list_node->prev; return i; }
			reference operator*() { return list_node->data; }
			pointer operator->() { return &list_node->data; }
			bool operator==(const self_type& rhs) const { return list_node == rhs.list_node; }
			bool operator!=(const self_type& rhs) const { return list_node != rhs.list_node; }

			msvc::list<T>::node* list_node;
		};

    private:
        msvc::list<T>::node *head;
        size_type _size;


    public:
        reference front() {
            return head->next->data;
        }

        reference back() {
            return head->prev->data;
        }

        iterator begin() {
			return iterator(head->next);
		}

		iterator end() {
			return iterator(head);
		}

		size_type size() {
            return _size;
		}

        size_type max_size() const noexcept {
			// Silly, theoretical max container size.
			return UINTPTR_MAX / sizeof(T);
		}

		iterator insert( iterator pos, const T& value ) {
		    list<T>::node* current_node = pos.list_node;
            list<T>::node* previous_node = current_node->prev;


            list<T>::node* new_node = new node(previous_node, current_node, value);

            current_node->prev = new_node;
            previous_node->next = new_node;

            _size++;

            return iterator(new_node);
		}

		iterator erase( iterator pos ) {
            if (!size()) {
                return end();
            }
            list<T>::node* current_node = pos.list_node;
            list<T>::node* previous_node = current_node->prev;
            list<T>::node* next_node = current_node->next;


            next_node->prev = previous_node;
            previous_node->next = next_node;

            delete current_node;

            return iterator(next_node);
		}

		void push_back( const T& value ) {
            insert(end(), value);
		}

	};
}

#endif // MSVC_LIST_H
