#include <stdbool.h>

#include <inkview.h>

ifont *font;

int main_handler(int, int, int);

int main() {
	InkViewMain(main_handler);
	return 0;
}

int main_handler(int type, int _1, int _2) {
	switch (type) {
		case EVT_INIT:

			font = OpenFont("DejaVu Sans", 25, false);
			SetPanelType(0);
			SetOrientation(0);
			break;

		case EVT_SHOW:

            SetAutoPowerOff(1);
			ClearScreen();

			SetFont(font, BLACK);
			DrawString(10, 10, "Hello World! :^)");

			FullUpdate();
			break;

		case EVT_EXIT:

			CloseFont(font);

    }
	return 0;
}
