#include <bits/stdc++.h>
using namespace std;

void problem1000();
void problem1001();
void problem1002();
void problem1003();
void problem1004();
void problem1005();
void problem1006();
void problem1007();
void problem1008();
void problem1009();
void problem1010();
void problem1011();
void problem1012();
void problem1013();
void problem1014();
void problem1015();
void problem1016();
void problem1017();
void problem1018();
void problem1019();
void problem1020();
void problem1021();
void problem1035();
void problem1036();
void problem1037();
void problem1038();
void problem1040();
void problem1041();
void problem1042();
void problem1043();
void problem1044();
void problem1045();
void problem1046();
void problem1047();
void problem1048();
void problem1049();
void problem1050();
void problem1051();
void problem1052();
void problem1059();
void problem1060();
void problem1064();
void problem1065();
void problem1066();
void problem1067();
void problem1070();
void problem1071();
void problem1072();
void problem1073();
void problem1074();
void problem1075();
void problem1078();
void problem1079();
void problem1080();
void problem1094();
void problem1095();
void problem1096();
void problem1097();
void problem1098();
void problem1099();
void problem1101();
void problem1113();
void problem1114();
void problem1115();
void problem1116();

int main() {
    /*
     _ Solution to the beecrowd Problems
     _ LANGUAGE: C++20
     _ Solved by: Md. Rakibul Islam Sabid
     _ CS Student, United International University
     _ Student ID: 011 231 0179
     #### Call by problem id and run it ####
     #### e.g. problem1000();           ####
     */
    problem1000();
    return 0;
}

/* 1000 - Hello World! */
void problem1000() {
    cout << "Hello World!" << endl;
}

/* 1001 - Extremely Basic */
void problem1001() {
    int a, b;
    cin >> a >> b;
    int X = a + b;
    cout << "X = " << X << endl;
}

/* 1002 - Area of a Circle */
void problem1002() {
    double R;
    cin >> R;
    double A = 3.14159 * pow(R, 2);
    cout << "A=" << fixed << setprecision(4) << A << endl;
}

/* 1003 - Simple Sum */
void problem1003() {
    int a, b;
    cin >> a >> b;
    int soma = a + b;
    cout << "SOMA = " << soma << endl;
}

/* 1004 - Simple Product */
void problem1004() {
    int a, b;
    cin >> a >> b;
    int PROD = a * b;
    cout << "PROD = " << PROD << endl;
}

/* 1005 - Average 1 */
void problem1005() {
    double a, b;
    cin >> a >> b;
    double media = ((a * 3.5) + (b * 7.5)) / 11.0;
    cout << "MEDIA = " << fixed << setprecision(5) << media << endl;
}

/* 1006 - Average 2 */
void problem1006() {
    double A, B, C;
    cin >> A >> B >> C;
    double media = ((A * 2) + (B * 3) + (C * 5)) / 10.0;
    cout << "MEDIA = " << fixed << setprecision(1) << media << endl;
}

/* 1007 - Difference */
void problem1007() {
    int A, B, C, D;
    cin >> A >> B >> C >> D;
    int diferenca = A * B - C * D;
    cout << "DIFERENCA = " << diferenca << endl;
}

/* 1008 - Salary */
void problem1008() {
    int number;
    int workedHour;
    float perHourSalary;
    cin >> number >> workedHour >> perHourSalary;
    float salary = (float) workedHour * perHourSalary;
    cout << "NUMBER = " << number << endl << "SALARY = U$ "
         << fixed << setprecision(2) << salary << endl;
}

/* 1009 - Salary with Bonus */
void problem1009() {
    string firstName;
    double fixedSalary;
    double salesTotal;
    cin >> firstName >> fixedSalary >> salesTotal;
    double finalSalary = fixedSalary + (salesTotal / 100.0) * 15;
    cout << "TOTAL = R$ " << fixed << setprecision(2) << finalSalary << endl;
}

/* 1010 - Simple Calculate */
void problem1010() {
    int code1, unit1;
    double price1;
    int code2, unit2;
    double price2;
    cin >> code1 >> unit1 >> price1;
    cin >> code2 >> unit2 >> price2;
    double vap = unit1 * price1 + unit2 * price2;
    cout << "VALOR A PAGAR: R$ " << fixed << setprecision(2) << vap << endl;
}

/* 1011 - Sphere */
void problem1011() {
    double R;
    cin >> R;
    double volume = (4.0/3.0) * 3.14159 * pow(R, 3);
    cout << "VOLUME = " << fixed << setprecision(3) << volume << endl;
}

/* 1012 - Area */
void problem1012() {
    double A, B, C;
    cin >> A >> B >> C;
    double triangulo = 0.5 * A * C;
    double circulo = 3.14159 * pow(C, 2);
    double trapezio = (A + B) / 2.0 * C;
    double quadrado = pow(B, 2);
    double retangulo = A * B;
    cout << "TRIANGULO: " << fixed << setprecision(3) << triangulo << endl;
    cout << "CIRCULO: " << fixed << setprecision(3) << circulo << endl;
    cout << "TRAPEZIO: " << fixed << setprecision(3) << trapezio << endl;
    cout << "QUADRADO: " << fixed << setprecision(3) << quadrado << endl;
    cout << "RETANGULO: " << fixed << setprecision(3) << retangulo << endl;
}

/* 1013 - The Greatest */
void problem1013() {
    int x, y, z;
    cin >> x >> y >> z;
    int greatest = (((x + y + abs(x - y)) / 2) + z +
            abs(((x + y + abs(x - y)) / 2) - z)) / 2;
    cout << greatest << " eh o maior" << endl;
}

/* 1014 - Consumption */
void problem1014() {
    int distance;
    double fuelTotal;
    cin >> distance >> fuelTotal;
    cout << fixed << setprecision(3) << (distance / fuelTotal) << " km/l" << endl;
}

/* 1015 - Distance Between Two Points */
void problem1015() {
    double x1, y1;
    cin >> x1 >> y1;
    double x2, y2;
    cin >> x2 >> y2;
    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    cout << fixed << setprecision(4) << distance << endl;
}

/* 1016 - Distance */
void problem1016() {
    int distance;
    cin >> distance;
    cout << distance * 2 << " minutos" << endl;
}

/* 1017 - Fuel Spent */
void problem1017() {
    int spentTime, speed;
    cin >> spentTime >> speed;
    cout << fixed << setprecision(3) << spentTime * speed / 12.0 << endl;
}

/* 1018 - Banknotes */
void problem1018() {
    int N;
    cin >> N;
    cout << N << endl;
    cout << N / 100 << " nota(s) de R$ 100,00" << endl;
    cout << N % 100 / 50 << " nota(s) de R$ 50,00" << endl;
    cout << N % 100 % 50 / 20 << " nota(s) de R$ 20,00" << endl;
    cout << N % 100 % 50 % 20 / 10 << " nota(s) de R$ 10,00" << endl;
    cout << N % 100 % 50 % 20 % 10 / 5 << " nota(s) de R$ 5,00" << endl;
    cout << N % 100 % 50 % 20 % 10 % 5 /2 << " nota(s) de R$ 2,00" << endl;
    cout << N % 100 % 50 % 20 % 10 % 5 % 2 << " nota(s) de R$ 1,00" << endl;
}

/* 1019 - Time Conversion */
void problem1019() {
    int N;
    cin >> N;
    cout << N / 3600 << ":" << N % 3600 / 60 << ":" << N % 3600 % 60 << endl;
}

/* 1020 - Age in Days */
void problem1020() {
    int days;
    cin >> days;
    cout << days / 365 << " ano(s)" << endl;
    cout << days % 365 / 30 << " mes(es)" << endl;
    cout << days % 365 % 30 << " dia(s)" << endl;
}

/* 1021 - Banknotes and Coins */
void problem1021() {
    double N;
    cin >> N;
    int M = (int) N;
    cout << "NOTAS:" << endl;
    cout << M / 100 << " nota(s) de R$ 100.00" << endl;
    cout << M % 100 / 50 << " nota(s) de R$ 50.00" << endl;
    cout << M % 100 % 50 / 20 << " nota(s) de R$ 20.00" << endl;
    cout << M % 100 % 50 % 20 / 10 << " nota(s) de R$ 10.00" << endl;
    cout << M % 100 % 50 % 20 % 10 / 5 << " nota(s) de R$ 5.00" << endl;
    cout << M % 100 % 50 % 20 % 10 % 5 /2 << " nota(s) de R$ 2.00" << endl;

    cout << "MOEDAS:" << endl;
    cout << M % 100 % 50 % 20 % 10 % 5 % 2 << " moeda(s) de R$ 1.00" << endl;
    M = (int) ((N - M) * 100);
    cout << M / 50 << " moeda(s) de R$ 0.50" << endl;
    cout << M % 50 / 25 << " moeda(s) de R$ 0.25" << endl;
    cout << M % 50 % 25 / 10 << " moeda(s) de R$ 0.10" << endl;
    cout << M % 50 % 25 % 10 / 5 << " moeda(s) de R$ 0.05" << endl;
    cout << M % 50 % 25 % 10 % 5 << " moeda(s) de R$ 0.01" << endl;
}

/* 1035 - Selection Test 1 */
void problem1035() {
    int A, B, C, D;
    cin >> A >> B >> C >> D;
    if (B > C && D > A && C + D > A + B && C > 0 && D > 0 && !(A % 2)) {
        cout << "Valores aceitos" << endl;
    } else cout << "Valores nao aceitos" << endl;
}

/* 1036 - Bhaskara's Formula */
void problem1036() {
    double a, b, c;
    cin >> a >> b >> c;
    double b2_4ac = pow(b, 2) - 4 * a * c;
    if (a == 0 || b2_4ac < 0) {
        cout << "Impossivel calcular" << endl;
    } else {
        double R1 = (- b + sqrt(b2_4ac)) / (2 * a);
        double R2 = (- b - sqrt(b2_4ac)) / (2 * a);
        cout << "R1 = " << fixed << setprecision(5) << R1 << endl;
        cout << "R2 = " << fixed << setprecision(5) << R2 << endl;
    }
}

/* 1037 - Interval */
void problem1037() {
    double X;
    cin >> X;
    if (X >= 0 && X <= 25) cout << "Intervalo [0,25]" << endl;
    else if (X > 25 && X <= 50) cout << "Intervalo (25,50]" << endl;
    else if (X > 50 && X <= 75) cout << "Intervalo (50,75]" << endl;
    else if (X > 75 && X <= 100) cout << "Intervalo (75,100]" << endl;
    else cout << "Fora de intervalo" << endl;
}

/* 1038 - Snack */
void problem1038() {
    int X, Y;
    cin >> X >> Y;
    switch (X)
    {
        case 1:
            cout << "Total: R$ " << fixed << setprecision(2) << (Y * 4.00) << endl;
            break;
        case 2:
            cout << "Total: R$ " << fixed << setprecision(2) << (Y * 4.50) << endl;
            break;
        case 3:
            cout << "Total: R$ " << fixed << setprecision(2) << (Y * 5.00) << endl;
            break;
        case 4:
            cout << "Total: R$ " << fixed << setprecision(2) << (Y * 2.00) << endl;
            break;
        case 5:
            cout << "Total: R$ " << fixed << setprecision(2) << (Y * 1.50) << endl;
            break;

        default:
            break;
    }
}

/* 1040 - Average 3 */
void problem1040() {
    double N1, N2, N3, N4;
    cin >> N1 >> N2 >> N3 >> N4;
    double media = (N1 * 2 + N2 * 3 + N3 * 4 + N4) / 10.0;
    cout << "Media: " << fixed << setprecision(1) << media << endl;
    if (media >= 7.0) {
        cout << "Aluno aprovado." << endl;
    } else if (media < 5.0) {
        cout << "Aluno reprovado." << endl;
    } else if (media >= 5.0 && media <= 6.9) {
        cout << "Aluno em exame." << endl;
        double temp;
        cin >> temp;
        cout << "Nota do exame: " << fixed << setprecision(1) << temp << endl;
        media = (media + temp) / 2.0;
        if (media >= 5.0) {
            cout << "Aluno aprovado." << endl;
        } else if (media <= 4.9) {
            cout << "Aluno reprovado." << endl;
        }
        cout << "Media final: " << fixed << setprecision(1) << media << endl;
    }
}

/* 1041 - Coordinates of a Point */
void problem1041() {
    double x, y;
    cin >> x >> y;
    if (x == 0.0 && y == 0.0) {
        cout << "Origem" << endl;
    } else if (x == 0) {
        cout << "Eixo Y" << endl;
    }  else if (y == 0) {
        cout << "Eixo X" << endl;
    } else {
        if (x > 0 && y > 0) cout << "Q1" << endl;
        if (x < 0 && y > 0) cout << "Q2" << endl;
        if (x < 0 && y < 0) cout << "Q3" << endl;
        if (x > 0 && y < 0) cout << "Q4" << endl;
    }
}

/* 1042 - Simple Sort */
void problem1042() {
    int array1[3];
    cin >> array1[0] >> array1[1] >> array1[2];
    int array2[3];
    array2[0] = array1[0];
    array2[1] = array1[1];
    array2[2] = array1[2];
    for (int i = 0; i < 2; i++)
    {
        int min_idx = i;
        for (int j = i + 1; j < 3; j++)
        {
            if (array2[min_idx] > array2[j]) {
                min_idx = j;
            }
        }
        if (min_idx != i) {
            int temp = array2[min_idx];
            array2[min_idx] = array2[i];
            array2[i] = temp;
        }
    }
    for (int i : array2) cout << i << endl;
    cout << endl;
    for (int i : array1) cout << i << endl;
}

/* 1043 - Triangle */
void problem1043() {
    double A, B, C;
    cin >> A >> B >> C;
    if (A + B > C && B + C > A && A + C > B) {
        cout << "Perimetro = " << fixed << setprecision(1) << (A + B + C) << endl;
    } else cout << "Area = " << fixed << setprecision(1) << ((A + B) * C) / 2.0 << endl;
}

/* 1044 - Multiples */
void problem1044() {
    int A, B;
    cin >> A >> B;
    if (!(B % A) || !(A % B)) cout << "Sao Multiplos" << endl;
    else cout << "Nao sao Multiplos" << endl;
}

/* 1045 - Triangle Types */
void problem1045() {
    double A, B, C;
    cin >> A >> B >> C;
    if (A > B && A > C) {
        if (B < C) {
            double temp = C;
            C = B;
            B = temp;
        }
    } else if (B > A && B > C) {
        double temp = A;
        A = B;
        B = temp;
        if (B < C) {
            double _temp = C;
            C = B;
            B = _temp;
        }
    } else if (C > A && C > B) {
        double temp = A;
        A = C;
        C = temp;
        if (B < C) {
            double _temp = C;
            C = B;
            B = _temp;
        }
    }
    if (A >= B + C) cout << "NAO FORMA TRIANGULO" << endl;
    else {
        if (A * A == B * B + C * C) cout << "TRIANGULO RETANGULO" << endl;
        if (A * A > B * B + C * C) cout << "TRIANGULO OBTUSANGULO" << endl;
        if (A * A < B * B + C * C) cout << "TRIANGULO ACUTANGULO" << endl;
        if (A == B && B == C) cout << "TRIANGULO EQUILATERO" << endl;
        if (A == B && A != C || B == C && B != A
            || A == C && A != B) cout << "TRIANGULO ISOSCELES" << endl;
    }
}

/* 1046 - Game Time */
void problem1046() {
    int st, en;
    cin >> st >> en;
    if (en > st) cout << "O JOGO DUROU " << en - st << " HORA(S)" << endl;
    else cout << "O JOGO DUROU " << en + 24 - st << " HORA(S)" << endl;
}

/* 1047 - Game Time with Minutes */
void problem1047() {
    int stHR, stMN, enHR, enMN;
    cin >> stHR >> stMN >> enHR >> enMN;
    int hour = 0, min = 0;
    if (stMN <= enMN) min = enMN - stMN;
    else {
        min = enMN + 60 - stMN;
        ++stHR;
    }
    if (stHR == enHR && stMN != enMN) hour -= 24;
    if (stHR < enHR) hour += enHR - stHR;
    else hour += enHR + 24 - stHR;
    cout << "O JOGO DUROU " << hour << " HORA(S) E "
         << min << " MINUTO(S)" << endl;
}

/* 1048 - Salary Increase */
void problem1048() {
    double salary, newSalary, earned;
    cin >> salary;
    if (salary >= 0 && salary <= 400.00) {
        cout << "Novo salario: " << fixed << setprecision(2) <<
        salary + (salary * 15) / 100.00 << endl;
        cout << "Reajuste ganho: " << fixed << setprecision(2) <<
        (salary * 15) / 100.00 << endl;
        cout << "Em percentual: 15 %" << endl;
    } else if (salary >= 400.01 && salary <= 800.00) {
        cout << "Novo salario: " << fixed << setprecision(2) <<
        salary + (salary * 12) / 100.00 << endl;
        cout << "Reajuste ganho: " << fixed << setprecision(2) <<
        (salary * 12) / 100.00 << endl;
        cout << "Em percentual: 12 %" << endl;
    } else if (salary >= 800.01 && salary <= 1200.00) {
        cout << "Novo salario: " << fixed << setprecision(2) <<
        salary + (salary * 10) / 100.00 << endl;
        cout << "Reajuste ganho: " << fixed << setprecision(2) <<
        (salary * 10) / 100.00 << endl;
        cout << "Em percentual: 10 %" << endl;
    } else if (salary >= 1200.01 && salary <= 2000.00) {
        cout << "Novo salario: " << fixed << setprecision(2) <<
        salary + (salary * 7) / 100.00 << endl;
        cout << "Reajuste ganho: " << fixed << setprecision(2) <<
        (salary * 7) / 100.00 << endl;
        cout << "Em percentual: 7 %" << endl;
    } else {
        cout << "Novo salario: " << fixed << setprecision(2) <<
        salary + (salary * 4) / 100.00 << endl;
        cout << "Reajuste ganho: " << fixed << setprecision(2) <<
        (salary * 4) / 100.00 << endl;
        cout << "Em percentual: 4 %" << endl;
    }
}

/* 1049 - Animal */
void problem1049() {
    string str1, str2, str3;
    cin >> str1 >> str2 >> str3;
    if (!str1.compare("vertebrado")) {
        if (!str2.compare("ave")) {
            if (!str3.compare("carnivoro")) {
                cout << "aguia" << endl;
            } else if (!str3.compare("onivoro")) {
                cout << "pomba" << endl;
            }
        } else if (!str2.compare("mamifero")) {
            if (!str3.compare("onivoro")) {
                cout << "homem" << endl;
            } else if (!str3.compare("herbivoro")) {
                cout << "vaca" << endl;
            }
        }
    } else if (!str1.compare("invertebrado")) {
        if (!str2.compare("inseto")) {
            if (!str3.compare("hematofago")) {
                cout << "pulga" << endl;
            } else if (!str3.compare("herbivoro")) {
                cout << "lagarta" << endl;
            }
        } else if (!str2.compare("anelideo")) {
            if (!str3.compare("hematofago")) {
                cout << "sanguessuga" << endl;
            } else if (!str3.compare("onivoro")) {
                cout << "minhoca" << endl;
            }
        }
    }
}

/* 1050 - DDD */
void problem1050() {
    int X;
    cin >> X;
    switch (X)
    {
        case 61:
            cout << "Brasilia" << endl;
            break;
        case 71:
            cout << "Salvador" << endl;
            break;
        case 11:
            cout << "Sao Paulo" << endl;
            break;
        case 21:
            cout << "Rio de Janeiro" << endl;
            break;
        case 32:
            cout << "Juiz de Fora" << endl;
            break;
        case 19:
            cout << "Campinas" << endl;
            break;
        case 27:
            cout << "Vitoria" << endl;
            break;
        case 31:
            cout << "Belo Horizonte" << endl;
            break;

        default:
            cout << "DDD nao cadastrado" << endl;
            break;
    }
}

/* 1051 - Taxes */
void problem1051() {
    double var, tax = 0;
    cin >> var;
    if (var > 4500.00) {
        tax += (var - 4500.00) * 28 / 100.00;
        var = 4500.00;
    }
    if (var > 3000.00) {
        tax += (var - 3000.00) * 18 / 100.00;
        var = 3000.00;
    }
    if (var > 2000.00) {
        tax += (var - 2000) * 8 / 100.00;
        cout << "R$ " << fixed << setprecision(2) << tax << endl;
    } else {
        cout << "Isento" << endl;
    }
}

/* 1052 - Month */
void problem1052() {
    int X;
    cin >> X;
    switch (X)
    {
        case 1:
            cout << "January" << endl;
            break;
        case 2:
            cout << "February" << endl;
            break;
        case 3:
            cout << "March" << endl;
            break;
        case 4:
            cout << "April" << endl;
            break;
        case 5:
            cout << "May" << endl;
            break;
        case 6:
            cout << "June" << endl;
            break;
        case 7:
            cout << "July" << endl;
            break;
        case 8:
            cout << "August" << endl;
            break;
        case 9:
            cout << "September" << endl;
            break;
        case 10:
            cout << "October" << endl;
            break;
        case 11:
            cout << "November" << endl;
            break;
        case 12:
            cout << "December" << endl;
            break;

        default:
            break;
    }
}

/* 1059 - Even Numbers */
void problem1059() {
    for (int i = 2; i < 101; i+=2) cout << i << endl;
}

/* 1060 - Positive Numbers */
void problem1060() {
    int pos = 0;
    for (int i = 0; i < 6; i++)
    {
        double temp;
        cin >> temp;
        if (temp > 0) pos++;
    }
    cout << pos << " valores positivos" << endl;
}

/* 1064 - Positives and Average */
void problem1064() {
    int pos = 0;
    double avg;
    for (int i = 0; i < 6; i++)
    {
        double temp;
        cin >> temp;
        if (temp > 0) {
            pos++;
            avg += temp;
        }
    }
    cout << pos << " valores positivos" << endl;
    cout << fixed << setprecision(1) << avg / pos << endl;
}

/* 1065 - Even Between five Numbers */
void problem1065() {
    int ev = 0;
    for (int i = 0; i < 5; i++)
    {
        int temp;
        cin >> temp;
        if (temp % 2 == 0) ev++;
    }
    cout << ev << " valores pares" << endl;
}

/* 1066 - Even, Odd, Positive and Negative */
void problem1066() {
    int ev = 0, od = 0, pos = 0, neg = 0;
    for (int i = 0; i < 5; i++)
    {
        int temp;
        cin >> temp;
        if (!(temp % 2)) ev++;
        else od++;
        if (temp > 0) pos++;
        else if (temp < 0) neg++;
    }
    cout << ev << " valor(es) par(es)" << endl;
    cout << od << " valor(es) impar(es)" << endl;
    cout << pos << " valor(es) positivo(s)" << endl;
    cout << neg << " valor(es) negativo(s)" << endl;
}

/* 1067 - Odd Numbers */
void problem1067() {
    int X;
    cin >> X;
    for (int i = 1; i < X + 1; i+=2) cout << i << endl;
}

/* 1070 - Six Odd Numbers */
void problem1070() {
    int X;
    cin >> X;
    if (!(X % 2)) X++;
    for (int i = X; i < X + 11; i+=2)
    {
        cout << i << endl;
    }
}

/* 1071 - Sum of Consecutive Odd Numbers I */
void problem1071() {
    int X, Y, sum = 0;
    cin >> X >> Y;
    if (X > Y) {
        X = X + Y;
        Y = X - Y;
        X = X - Y;
    }
    for (int i = ++X; i < Y ; i++)
    {
        if (i % 2) sum += i;
    }
    cout << sum << endl;
}

/* 1072 - Interval 2 */
void problem1072() {
    int N, in = 0, out = 0;
    cin >> N;
    while (N--) {
        int X;
        cin >> X;
        if (X >= 10 && X <= 20) ++in;
        else out++;
    }
    cout << in << " in" << endl;
    cout << out << " out" << endl;
}

/* 1073 - Even Square */
void problem1073() {
    int N;
    cin >> N;
    for (int i = 2; i <= N; i+=2)
    {
        if (!(i % 2)) cout << i << "^" << 2
                           << " = " << (int) pow(i, 2) << endl;
    }
}

/* 1074 - Even or Odd */
void problem1074() {
    int N;
    cin >> N;
    while (N--)
    {
        int temp;
        cin >> temp;
        if (temp != 0) {
            if (temp % 2) cout << "ODD ";
            else cout << "EVEN ";
        }
        if (temp > 0) cout << "POSITIVE" << endl;
        else if (temp < 0) cout << "NEGATIVE" << endl;
        else cout << "NULL" << endl;
    }
}

/* 1075 - Remaining 2 */
void problem1075() {
    int N;
    cin >> N;
    for (int i = 0; i < 10000; i++)
    {
        if (i % N == 2) cout << i << endl;
    }
}

/* 1078 - Multiplication Table */
void problem1078() {
    int N;
    cin >> N;
    for (int i = 1; i < 11; i++)
    {
        cout << i << " x " << N << " = " << N * i << endl;
    }
}

/* 1079 - Weighted Averages */
void problem1079() {
    int N;
    cin >> N;
    while (N--)
    {
        double a, b, c;
        cin >> a >> b >> c;
        double avg = (2 * a + 3 * b + c * 5) / 10.0;
        cout << fixed << setprecision(1) << avg << endl;
    }
}

/* 1080 - Highest and Position */
void problem1080() {
    int max, max_position;
    max = INT_MIN;
    for (int i = 0; i < 100; i++)
    {
        int temp;
        cin >> temp;
        if (temp > max) {
            max = temp;
            max_position = i + 1;
        }
    }
    cout << max << endl;
    cout << max_position << endl;
}

/* 1094 - Experiments */
void problem1094() {
    int N;
    cin >> N;
    int coelhos = 0, ratos = 0, sapos = 0;
    while (N--)
    {
        int n;
        char ch;
        cin >> n >> ch;
        if (ch == 'C') coelhos += n;
        else if (ch == 'R') ratos += n;
        else if (ch == 'S') sapos += n;
    }
    int total = coelhos + ratos + sapos;
    cout << "Total: " << total <<" cobaias" << endl;
    cout << "Total de coelhos: " << coelhos << endl;
    cout << "Total de ratos: " << ratos << endl;
    cout << "Total de sapos: " << sapos << endl;
    cout << "Percentual de coelhos: " << fixed << setprecision(2) <<
    (coelhos / (double) total) * 100 << " %" << endl;
    cout << "Percentual de ratos: " << fixed << setprecision(2) <<
    (ratos / (double) total) * 100 << " %" << endl;
    cout << "Percentual de sapos: " << fixed << setprecision(2) <<
    (sapos / (double) total) * 100 << " %" << endl;
}

/* 1095 - Sequence IJ 1 */
void problem1095() {
    for (int i = 1, j = 60; j >= 0; i+=3, j-=5)
    {
        cout << "I=" << i << " J=" << j << endl;
    }
}

/* 1096 - Sequence IJ 2 */
void problem1096() {
    for (int i = 1; i < 10; i+=2)
    {
        for (int j = 7; j > 4; j--) {
            cout << "I=" << i << " J=" << j << endl;
        }
    }
}

/* 1097 - Sequence IJ 3 */
void problem1097() {
    int st = 5;
    for (int i = 1; i < 10; i+=2)
    {
        st += 2;
        for (int j = st; j > st - 3; j--) {
            cout << "I=" << i << " J=" << j << endl;
        }
    }
}

/* 1098 - Sequence IJ 4 */
void problem1098() {
    for (double i = 0; i <= 2; i+=0.2)
    {
        for (int j = 1; j < 4; j++) {
            cout << "I=" << i << " J=" << j + i  << endl;
        }
    }
}

/* 1099 - Sum of Consecutive Odd Numbers II */
void problem1099() {
    int N;
    cin >> N;
    while (N--)
    {
        int X, Y, sum = 0;
        cin >> X >> Y;
        if (X > Y) {
            X = X + Y;
            Y = X - Y;
            X = X - Y;
        }
        if (X % 2) ++X;
        for (int i = ++X; i < Y; i+=2)
        {
            sum += i;
        }
        cout << sum << endl;
    }
}

/* 1101 - Sequence of Numbers and Sum */
void problem1101() {
    while (true)
    {
        int M, N;
        cin >> M >> N;
        if (M > 0 && N > 0) {
            if (M > N) {
                M = M + N;
                N = M - N;
                M = M - N;
            }
            int sum = 0;
            for (int i = M; i < N + 1; i++)
            {
                cout << i << " ";
                sum += i;
            }
            cout << "Sum=" << sum << endl;
        } else break;
    }
}

/* 1113 - Ascending and Descending */
void problem1113() {
    while (true) {
        int X, Y;
        cin >> X >> Y;
        if (X == Y) break;
        else if (X < Y) {
            cout << "Crescente" << endl;
        } else cout << "Decrescente" << endl;
    }
}

/* 1114 - Fixed Password */
void problem1114() {
    while (true) {
        int X;
        cin >> X;
        if (X == 2002) {
            cout << "Acesso Permitido" << endl;
            break;
        } else {
            cout << "Senha Invalida" << endl;
        }
    }
}

/* 1115 - Quadrant */
void problem1115() {
    while (true) {
        int X, Y;
        cin >> X >> Y;
        if (X == 0 || Y == 0) break;
        if (X > 0 && Y > 0) cout << "primeiro" << endl;
        if (X < 0 && Y > 0) cout << "segundo" << endl;
        if (X < 0 && Y < 0) cout << "terceiro" << endl;
        if (X > 0 && Y < 0) cout << "quarto" << endl;
    }
}

/* 1116 - Dividing X by Y */
void problem1116() {
    int N;
    cin >> N;
    for (int i = 0; i < N; i++) {
        int X, Y;
        cin >> X >> Y;
        if (Y == 0) {
            cout << "divisao impossivel" << endl;
        } else {
            cout << fixed << setprecision(1) << (double) X / Y << endl;
        }
    }
}