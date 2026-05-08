#include <iostream>

struct box
{
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};

void show(box b);
void setVolume(box *b);

int main()
{
    box b1 = {"box1", 10.0, 20.0, 30.0};
    setVolume(&b1);
    show(b1);
    return 0;
}

void show(box b)
{
    std::cout << "Maker: " << b.maker << std::endl;
    std::cout << "Height: " << b.height << std::endl;
    std::cout << "Width: " << b.width << std::endl;
    std::cout << "Length: " << b.length << std::endl;
    std::cout << "Volume: " << b.volume << std::endl;
}

void setVolume(box *b)
{
    b->volume = b->height * b->width * b->length;
}