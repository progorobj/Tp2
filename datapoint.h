#ifndef __DATAPOINT_H__
#define __DATAPOINT_H__

#include <string>


class DataPoint{
    
   private :
          double lattitude;
          double longitude;
          std::string unite;
          double temperature;
    public :
          DataPoint(std::string l_unite,double la_lalttitude,double la_longitude,double la_temperature);
       
          double getLattitude() const;
          double getLongitude() const;
          std::string getUnite();
          double getTemperature();
          
          bool operator<(const DataPoint& flot_de_droite) const;
          
          friend std::ostream& operator<<(std::ostream& os, const DataPoint& un_data_point);
    };
#endif