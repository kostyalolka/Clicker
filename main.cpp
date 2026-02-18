#include <QApplication>
#include <QPushButton>
#include <QString>

int main(int argc, char* argv[]) {

    int count = 0;

    QApplication app(argc, argv);

    QPushButton counter(QString::number(count));

    QObject::connect(&counter, &QPushButton::clicked, [&]() {
        count = count +1;
        counter.setText(QString::number(count));
    });

    counter.resize(500,600);
    counter.show();
    return app.exec();
}
