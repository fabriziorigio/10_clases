#include <iostream>
#include <iomanip>
using namespace std;

class Calculadora{
    private:
        float primero;
        float segundo;
        bool comprobar(){
            return (segundo != 0.0f);
        }
    public:
        Calculadora(){
            primero = 0.0f;
            segundo = 0.0f;
        }
        void setNumeros(float a, float b){
            primero = a;
            segundo = b;
        }
        float getPrimero(){
            return primero;
        }
        float getSegundo(){
            return segundo;
        }
        float sumar() {
            return primero + segundo;
        }
        float restar(){
            return primero - segundo;
        }
        float multiplicar(){
            return primero * segundo;
        }
        bool dividir(float& resultado){
            if (comprobar()){
                resultado = primero / segundo;
                return true;
            }
            return false;
        }
};
int main(){
    Calculadora casio;
    int opcion;
    float n1, n2, res;

    do {
        cout << "   MENU CALCULADORA CASIO  \n";
        cout << "1. Establecer numeros\n";
        cout << "2. Consultar numeros almacenados\n";
        cout << "3. Sumar\n";
        cout << "4. Restar\n";
        cout << "5. Multiplicar\n";
        cout << "6. Dividir\n";
        cout << "7. Salir\n";
        cout << "Elija una opcion: ";
        cin >> opcion;
        switch (opcion){
            case 1:
                cout << "Ingrese el primer numero: ";
                cin >> n1;
                cout << "Ingrese el segundo numero: ";
                cin >> n2;
                casio.setNumeros(n1, n2);
                cout << "¡Numeros guardados correctamente!\n";
                break;
            case 2:
                cout << "\n--- Numeros en memoria ---\n";
                cout << "Primer numero: " << casio.getPrimero() << "\n";
                cout << "Segundo numero: " << casio.getSegundo() << "\n";
                break;
            case 3:
                cout << "Resultado de la Suma: " << casio.sumar() << "\n";
                break;
            case 4:
                cout << "Resultado de la Restar: " << casio.restar() << "\n";
                break;
            case 5:
                cout << "Resultado de la Multiplicacion: " << casio.multiplicar() << "\n";
                break;
            case 6:
                if (casio.dividir(res)) {
                    cout << "Resultado de la Division: " << res << "\n";
                } else {
                    cout << "Error: No se puede dividir entre cero. El segundo numero es 0.\n";
                }
                break;
            case 7:
                cout << "Saliendo del programa. ¡Nos vemos, capo!\n";
                break;
            default:
                cout << "Opcion no valida. Intente de nuevo.\n";
                break;
        }
    } while (opcion != 7);
    return 0;
}

