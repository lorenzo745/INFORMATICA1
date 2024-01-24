#ifndef RETTANGOLO_H
#define RETTANGOLO_H

class Rettangolo
{
    private:
    
        int valore;
        int passo;
    
    public:

    Contatore();    /*costruttore con zero parametri - Pone valore a zero e passo ad 1 */
   Contatore(int);    /*costruttore con 1 parametro - Pone valore uguale a parametro e passo ad 1 */
   Contatore(int, int);    /*costruttore con 2 parametri, Pone valore uguale a parametro e passo ad 1 /*
   ~Contatore();  /*distruttore*/
    void setBase(double base);
    void setAltezza(double altezza);
    double getBase();
    double getAltezza();
    double calcolaPerimetro();
    double calcolaArea();
    double calcolaDiagonale();
    void stampaTutto();
};

#endif