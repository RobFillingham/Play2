enum bool {false,true};
enum TipoDeBanda {AM, FM};

class Radio
{    float frecuencia;
     TipoDeBanda banda;
     bool prendido;
   public:
     Radio(float f=95.5, TipoDeBanda b=FM, bool p=false);
     void CambiaBanda(TipoDeBanda);
     void CambiaFrecuencia(float);
     void On_Off(void);
     float Frecuencia(void);
     TipoDeBanda Banda(void);
     bool Prendido(void);
};

Radio::Radio(float f, TipoDeBanda b, bool p)
{    frecuencia = f;
     banda = b;
     prendido = p;
}

void Radio::CambiaBanda(TipoDeBanda b)
{    banda = b; 
}

void Radio::CambiaFrecuencia(float f)
{    frecuencia = f; 
}

void Radio::On_Off(void)
{    prendido= bool(!prendido); 
}

float Radio::Frecuencia(void)
{    return frecuencia; 
}

TipoDeBanda Radio::Banda(void)
{    return banda; 
}

bool Radio::Prendido(void)
{    return prendido; 
}

