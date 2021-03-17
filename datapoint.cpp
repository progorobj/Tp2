#include "dataPoint.h"

DataPoint::DataPoint(std::string l_unite,double la_lalttitude,double la_longitude,double la_temperature){
     this->unite = l_unite;
     this->lattitude = la_lalttitude;
     this->longitude = la_longitude;     
     this->temperature = (la_temperature-32)*5/9.0;
    
    }
    
double DataPoint::getLattitude() const{
        return this->lattitude;
        }
        
double DataPoint::getLongitude()const{
      return this->longitude;
      }
      
std::string DataPoint::getUnite(){
      return this->unite;
      }
      
double DataPoint::getTemperature(){
      return this->temperature;
      }
      
bool DataPoint::operator<(const DataPoint& flot_de_droite) const{
     if(this->lattitude<flot_de_droite.getLattitude()) return true;
     else if(this->lattitude==flot_de_droite.getLattitude() && this->longitude>flot_de_droite.getLongitude()) 
         return true;
         
     return false;
     }