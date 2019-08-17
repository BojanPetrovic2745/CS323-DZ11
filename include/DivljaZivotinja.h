#ifndef DIVLJAZIVOTINJA_H
#define DIVLJAZIVOTINJA_H

#include "Zivotinja.h"


class DivljaZivotinja: public Zivotinja
{
    public:
        DivljaZivotinja();
        virtual ~DivljaZivotinja();

        void setLoviste(string loviste);
        string getLoviste();

        void setIme(string ime);
        string getIme() const;

        void setBoja(string boja);
        string getBoja() const;

        void setStarost(int starost);
        int getStarost() const;

        void setTezina(double tezina);
        double getTezina() const;

        void setVisina(double visina);
        double getVisina() const;


        virtual void info(){
            cout << "Ime: " << DivljaZivotinja::getIme() << " Boja: " << DivljaZivotinja::getBoja() << " Starost: " << DivljaZivotinja::getStarost() << " godina! Tezina: " << DivljaZivotinja::getTezina() << " kg! Visina: " << DivljaZivotinja::getVisina() << "m! Loviste: " << DivljaZivotinja::getLoviste() << endl;
        }




    protected:


    private:
        string loviste;

};

#endif // DIVLJAZIVOTINJA_H
