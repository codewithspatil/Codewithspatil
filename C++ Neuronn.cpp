#include <iostream>
#include <vector>
#include <cmath> // exp() फंक्शन वापरण्यासाठी

// १. क्लास तयार केला (AI चा मेंदू - न्यूरॉन)
class ArtificialNeuron {
private:
    double weight;
    double bias;

    // सिगमॉइड ॲक्टिव्हेशन फंक्शन (उत्तर ० आणि १ च्या मध्ये आणण्यासाठी)
    double sigmoid(double x) {
        return 1.0 / (1.0 + exp(-x));
    }

public:
    // कन्स्ट्रक्टर: ऑब्जेक्ट तयार होताच वजन (Weight) आणि बायस (Bias) सेट होईल
    ArtificialNeuron(double w, double b) {
        weight = w;
        bias = b;
    }

    // विचार करण्याचे फंक्शन (Prediction)
    double predict(double input) {
        double formula = (input * weight) + bias; // मुख्य गणित
        return sigmoid(formula); // फायनल उत्तर
    }
};

int main() {
    // २. ऑब्जेक्ट तयार केला (Weight = 2.0, Bias = -1.0 ठेवून न्यूरॉन बनवला)
    ArtificialNeuron myBrain(2.0, -1.0);

    // ३. न्यूरॉनला इनपुट देऊन टेस्ट केले
    double testInput = 1.0;
    double output = myBrain.predict(testInput);

    // ४. निकाल पाहिला
    std::cout << "--- तुमचा पहिला AI प्रोजेक्ट यशस्वी झाला! ---" << std::endl;
    std::cout << "इनपुट " << testInput << " साठी न्यूरॉनचे उत्तर आहे: " << output << std::endl;

    return 0;
}

