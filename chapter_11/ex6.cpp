class Stonewt
{
private:
    double pounds;

public:
    Stonewt(double lbs) : pounds(lbs) {}

    bool operator==(const Stonewt &other) const { return pounds == other.pounds; }
    bool operator!=(const Stonewt &other) const { return pounds != other.pounds; }
    bool operator<(const Stonewt &other) const { return pounds < other.pounds; }
    bool operator>(const Stonewt &other) const { return pounds > other.pounds; }
    bool operator<=(const Stonewt &other) const { return pounds <= other.pounds; }
    bool operator>=(const Stonewt &other) const { return pounds >= other.pounds; }
};