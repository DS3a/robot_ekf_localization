#include "kalman/ekfilter.hpp"

namespace prathamEkf {
    class PrathamEkf : public Kalman::EKFilter<double, 0, false, false, false> {
        public:
            PrathamEkf();
            void measure_acceleration();
            void measure_velocity();
            void measure_position();
            void measure_orientation();
            void measure_angular_velocity();

        private:
            double wheel_radius;
    };
}
