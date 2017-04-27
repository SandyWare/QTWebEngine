import QtQuick 2.7
import QtQuick.Controls 2.0
import QtQuick.Layouts 1.0
import QtWebEngine 1.4

import "testJava.js" as Helper



ApplicationWindow {
    width: 1024
    height: 750
    visible: true

    WebEngineView {
        id: webEngine
        anchors.fill: parent
        url: "qrc:/TestPage.html"

        function someSlot(v) {
            console.log("Signal received " + v);
            mouse.save()
        }

        onLoadingChanged: {
            switch(loadRequest.status){
                case  WebEngineLoadRequest.LoadStartedStatus:
                    console.log("LoadStartedStatus");
                    Helper.internalQmlObject.someSignal.connect(someSlot);
                    break;
            }
        }
    }
}

