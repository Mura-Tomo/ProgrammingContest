#include <iostream>
using namespace std;

int main (void) {
    int N,M;
    cin >> N >> M;

    if (N == 1) {
        for (int a=1; a<=M; a++) {
                cout << a << endl;
        }
    }


    if (N == 2) {
        for (int a=1; a<=M; a++) {
            for (int b=a+1; b<=M; b++) {
                cout << a << " " << b << endl;
            }
        }
    }

    if (N == 3) {
        for (int a=1; a<=M; a++) {
            for (int b=a+1; b<=M; b++) {
                for (int c=b+1; c<=M; c++) {
                    cout << a << " " << b << " " << c << endl;
                }
            }
        }
    }

    if (N == 4) {
        for (int a=1; a<=M; a++) {
            for (int b=a+1; b<=M; b++) {
                for (int c=b+1; c<=M; c++) {
                    for (int d=c+1; d<=M; d++) {
                        cout << a << " " << b << " " << c << " " << d << endl;
                    }
                }
            }
        }
    }

    if (N == 5) {
        for (int a=1; a<=M; a++) {
            for (int b=a+1; b<=M; b++) {
                for (int c=b+1; c<=M; c++) {
                    for (int d=c+1; d<=M; d++) {
                        for (int e=d+1; e<=M; e++) {
                            cout << a << " " << b << " " << c << " " << d << " " << e << endl;
                        }
                    }
                }
            }
        }
    }

    if (N == 6) {
        for (int a=1; a<=M; a++) {
            for (int b=a+1; b<=M; b++) {
                for (int c=b+1; c<=M; c++) {
                    for (int d=c+1; d<=M; d++) {
                        for (int e=d+1; e<=M; e++) {
                            for (int f=e+1; f<=M; f++) {
                                cout << a << " " << b << " " << c << " " << d << " " << e << " " << f  << endl;
                            }
                        }
                    }
                }
            }
        }
    }


    if (N == 7) {
        for (int a=1; a<=M; a++) {
            for (int b=a+1; b<=M; b++) {
                for (int c=b+1; c<=M; c++) {
                    for (int d=c+1; d<=M; d++) {
                        for (int e=d+1; e<=M; e++) {
                            for (int f=e+1; f<=M; f++) {
                                for (int g=f+1; g<=M; g++) {
                                    cout << a << " " << b << " " << c << " " << d << " " << e << " " << f  << " " << g  << endl;
                                }
                            }
                        }
                    }
                }
            }
        }
    }


    if (N == 8) {
        for (int a=1; a<=M; a++) {
            for (int b=a+1; b<=M; b++) {
                for (int c=b+1; c<=M; c++) {
                    for (int d=c+1; d<=M; d++) {
                        for (int e=d+1; e<=M; e++) {
                            for (int f=e+1; f<=M; f++) {
                                for (int g=f+1; g<=M; g++) {
                                    for (int h=g+1; h<=M; h++) {
                                        cout << a << " " << b << " " << c << " " << d << " " << e << " " << f  << " " << g  << " " << h << endl;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    if (N == 9) {
        for (int a=1; a<=M; a++) {
            for (int b=a+1; b<=M; b++) {
                for (int c=b+1; c<=M; c++) {
                    for (int d=c+1; d<=M; d++) {
                        for (int e=d+1; e<=M; e++) {
                            for (int f=e+1; f<=M; f++) {
                                for (int g=f+1; g<=M; g++) {
                                    for (int h=g+1; h<=M; h++) {
                                        for (int i=h+1; i<=M; i++) {
                                            cout << a << " " << b << " " << c << " " << d << " " << e << " " << f  << " " << g  << " " << h << " " << i << endl;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }


    if (N == 10) {
        for (int a=1; a<=M; a++) {
            for (int b=a+1; b<=M; b++) {
                for (int c=b+1; c<=M; c++) {
                    for (int d=c+1; d<=M; d++) {
                        for (int e=d+1; e<=M; e++) {
                            for (int f=e+1; f<=M; f++) {
                                for (int g=f+1; g<=M; g++) {
                                    for (int h=g+1; h<=M; h++) {
                                        for (int i=h+1; i<=M; i++) {
                                            for (int j=i+1; j<=M; j++) {
                                                cout << a << " " << b << " " << c << " " << d << " " << e << " " << f  << " " << g  << " " << h << " " << i << " " << j << endl;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    return 0;
}