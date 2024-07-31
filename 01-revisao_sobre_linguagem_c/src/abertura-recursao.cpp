#include <iostream>

using namespace std;

const string vt100StrRedBlack = "\e[0;1;31;40m";
const string vt100StrRedDarkBlack = "\e[0;2;31;40m";
const string vt100StrGreenBlack = "\e[0;1;32;40m";
const string vt100StrGreenDarkBlack = "\e[0;2;32;40m";
const string vt100StrYellowBlack = "\e[0;1;33;40m";
const string vt100StrYellowDarkBlack = "\e[0;2;33;40m";
const string vt100StrBlueBlack = "\e[0;1;34;40m";
const string vt100StrBlueDarkBlack = "\e[0;2;34;40m";
const string vt100StrMagentaBlack = "\e[0;1;35;40m";
const string vt100StrMagentaDarkBlack = "\e[0;2;35;40m";
const string vt100StrCyanBlack = "\e[0;1;36;40m";
const string vt100StrCyanDarkBlack = "\e[0;2;36;40m";
const string vt100StrWhiteBlack = "\e[0;1;37;40m";
const string vt100StrWhiteDarkBlack = "\e[0;2;37;40m";

int main() {
  cout << "\e[H\e[2J";
  cout << vt100StrCyanBlack;
  
  cout << "PUCRS - Engenharia de Computação" << vt100StrYellowDarkBlack << "            \"O fracasso é uma ótima oportunidade para" << endl;
  cout << vt100StrCyanBlack;
  cout << "                                " << vt100StrYellowDarkBlack << "          começar de novo de forma mais inteligente.\"" << endl;
  cout << vt100StrWhiteDarkBlack;
  cout << "Disciplina:                     " << vt100StrYellowDarkBlack << "                                         (Henry Ford)" << endl;
  // https://www.topster.pt/texto-para-ascii/

  // Estilo da fonte: small
  cout << vt100StrYellowBlack;
  
  cout << "  ___                                                                  " << endl;
  cout << " | _ \\  _ _   ___   __ _   _ _   __ _   _ __    __ _   __   __ _   ___ " << endl;
  cout << " |  _/ | '_| / _ \\ / _` | | '_| / _` | | '  \\  / _` | / _| / _` | / _ \\" << endl;
  cout << " |_|   |_|   \\___/ \\__, | |_|   \\__,_| |_|_|_| \\__,_| \\__| \\__,_| \\___/" << endl;
  cout << "                   |___/                                               " << endl;
  cout << "   ___          _                _               _        " << endl;
  cout << "  / _ \\   _ _  (_)  ___   _ _   | |_   __ _   __| |  __ _ " << endl;
  cout << " | (_) | | '_| | | / -_) | ' \\  |  _| / _` | / _` | / _` |" << endl;
  cout << "  \\___/  |_|   |_| \\___| |_||_|  \\__| \\__,_| \\__,_| \\__,_|" << endl;
  cout << "                ___    _        _         _              " << endl;
  cout << "  __ _         / _ \\  | |__    (_)  ___  | |_   ___   ___" << endl;
  cout << " / _` |       | (_) | | '_ \\   | | / -_) |  _| / _ \\ (_-<" << endl;
  cout << " \\__,_|        \\___/  |_.__/  _/ | \\___|  \\__| \\___/ /__/" << endl;
  cout << "                             |__/                        " << endl;
  cout << endl;
/*
  cout << "  _             _                         _                 _              _         " << endl;
  cout << " | |     __ _  | |__   ___   _ _   __ _  | |_   ___   _ _  (_)  ___     __| |  ___   " << endl;
  cout << " | |__  / _` | | '_ \\ / _ \\ | '_| / _` | |  _| / _ \\ | '_| | | / _ \\   / _` | / -_)  " << endl;
  cout << " |____| \\__,_| |_.__/ \\___/ |_|   \\__,_|  \\__| \\___/ |_|   |_| \\___/   \\__,_| \\___|  " << endl;
  cout << "" << endl;
  cout << "  ___                                                                      ___   ___ " << endl;
  cout << " | _ \\  _ _   ___   __ _   _ _   __ _   _ __    __ _   __   __ _   ___    |_ _| |_ _|" << endl;
  cout << " |  _/ | '_| / _ \\ / _` | | '_| / _` | | '  \\  / _` | / _| / _` | / _ \\    | |   | | " << endl;
  cout << " |_|   |_|   \\___/ \\__, | |_|   \\__,_| |_|_|_| \\__,_| \\__| \\__,_| \\___/   |___| |___|" << endl;
  cout << "                   |___/                                                             " << endl;
*/

  cout << endl;
  cout << vt100StrWhiteDarkBlack<< "Professor: " << vt100StrCyanBlack << "Roland Teodorowitsch" << endl;
  cout << endl<< vt100StrWhiteDarkBlack << "Assunto: " << vt100StrCyanBlack << "Nivelamento sobre Recursividade" << endl;
  cout << endl << endl;
  cout << "\e[0;37;40m";
}

