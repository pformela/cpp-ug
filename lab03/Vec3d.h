#pragma once
#include <string>

class Vec3d
{
private:
  int x_, y_, z_;

public:
  Vec3d() : x_(0), y_(0), z_(0){};

  Vec3d(int x, int y, int z)
  {
    this->x_ = x;
    this->y_ = y;
    this->z_ = z;
  };

  Vec3d add(Vec3d v);
  Vec3d subtract(Vec3d v);
  Vec3d increment();
  Vec3d multiply(Vec3d v);
  bool equals(Vec3d v);
  std::string toString();
};

Vec3d Vec3d::add(Vec3d v)
{
  int x = this->x_ + v.x_;
  int y = this->y_ + v.y_;
  int z = this->z_ + v.z_;

  return Vec3d(x, y, z);
}

Vec3d Vec3d::subtract(Vec3d v)
{
  int x = this->x_ - v.x_;
  int y = this->y_ - v.y_;
  int z = this->z_ - v.z_;

  return Vec3d(x, y, z);
}

Vec3d Vec3d::increment()
{
  int x = this->x_ + 1;
  int y = this->y_ + 1;
  int z = this->z_ + 1;

  return Vec3d(x, y, z);
}

Vec3d Vec3d::multiply(Vec3d v)
{
  int x = this->y_ * v.z_ - this->z_ * v.y_;
  int y = this->z_ * v.x_ - this->x_ * v.z_;
  int z = this->x_ * v.y_ - this->y_ * v.x_;

  return Vec3d(x, y, z);
}

bool Vec3d::equals(Vec3d v)
{
  return this->x_ == v.x_ && this->y_ == v.y_ && this->z_ == v.z_;
}

std::string Vec3d::toString()
{
  return "Vec3d(X: " + std::to_string(this->x_) + ", Y: " + std::to_string(this->y_) + ", Z: " + std::to_string(this->z_) + ")";
}