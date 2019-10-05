#include "Display.h"

void plasma::Display::SetVisibility(int frame, int value) {
    this->visibility.data.Set(frame, value);
}

int plasma::Display::GetVisibility(int frame) {
    return this->visibility.data.Get(frame);
}

int plasma::Display::GetFrameCount() {
    return this->visibility.data.Length();
}
