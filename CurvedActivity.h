#include "GradedActivity.h"

class CurvedActivity : public GradedActivity {
        protected:
            double rawScore;   //unadjusted score
            double percentage;   //curve percentage
        public:
            //Default constructor
            CurvedActivity() : GradedActivity() {
                rawScore = 0.0;
                percentage = 0.0;
            }

            //Mutator functions
            void setScore(double s) {
                rawScore = s;
                GradedActivity::setScore(rawScore * percentage);
            }

            void setPercentage(double pct) {
                percentage = pct;
            }

            //Accessor functions
            double getPercentage() const {
                return percentage;
            }

            double getRawScore() const {
                return rawScore;
            }

};