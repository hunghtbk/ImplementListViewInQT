import QtQuick 2.3
import QtQuick.Window 2.2

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")

    ListView {
        id: listview
        anchors.fill: parent
        delegate: Text {
            id: text1
            text: "Text + " + size + "----" + type
        }
        model: ListModel {
            ListElement {
                size: "hunght 1"
                type: "handsome"
            }
            ListElement {
                size: "hunght 2"
                type: "handsome"
            }
            ListElement {
                size: "hunght 3"
                type: "handsome"
            }
        }
    }
}
