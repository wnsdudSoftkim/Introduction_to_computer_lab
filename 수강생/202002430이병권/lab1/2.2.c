int main(void) {
	int radius = 10;
	float volume;
	volume = (4.0f / 3.0f) * M_PI * radius * radius * radius;
	printf("Volume of a sphere with a radius of %d: %f\n", radius, volume);
	return 0;
}