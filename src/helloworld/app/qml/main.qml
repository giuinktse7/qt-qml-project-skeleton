import AppComponents
import QtQuick

Window {
    id: root
    visible: true
    Text {
        text: "Hello, world!"
        anchors.centerIn: parent
        color: "red"
        z: 2
    }
    FramedImage { anchors.fill: parent }

    RedSquare {
        anchors.centerIn: parent
    }

}