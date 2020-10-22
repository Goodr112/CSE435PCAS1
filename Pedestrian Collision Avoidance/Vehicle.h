#pragma once
class Vehicle
{
	public:
		Vehicle(double x, double y, double acceleration) {
			this->x = x;
			this->y = y;
			this->acceleration = acceleration;
		}

		double getSpeed() {
			return steady_state_speed;
		}

		double getwidth() {
			return width;
		}

		double getXCoordinate() {
			return x;
		}

		double getYCoordiante() {
			return y;
		}

		double getAcceleration() {
			return acceleration;
		}

		double setAcceleration(double acceleration) {
			this->acceleration = acceleration;
		}

		double setXCoordinate(double x) {
			this->x = x;
		}

		double setYCoordiante(double y) {
			this->y = y;
		}

	private:
		const double steady_state_speed = 13.9; //in meters/second
		const int width = 2; //in meters
		double x;
		double y;
		double acceleration;
};

