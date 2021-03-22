# include <stdio.h>

int main(void) {

	float s;
	char* desc = malloc(256);

	printf("please enter the wind speed in knots.");
	scanf_s("%f", &s);

	if (s < 1.00f) {
		desc = "Calm";
	}
	else if (s >= 1.00f &&  s < 4.00f) {
		desc = "Light air";
	}
	else if (s >= 4.00f && s < 27.00f) {
		desc = "Breeze";
	}
	else if (s >= 27.00f && s < 47.00f) {
		desc = "Gale";
	}
	else if (s >= 47.00f && s < 63.00f) {
		desc = "Storm";
	}
	else {
		desc = "Hurricane";
	}

	printf("It's %s", desc);

}