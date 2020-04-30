/*
 * Copyright 2015 Canonical Ltd.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation; version 3.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

import QtQuick 2.4
import keys 1.0
import "../keys/languages.js" as Languages

KeyPad {

    anchors.fill: parent;
    content: c1
    symbols: "languages/Keyboard_emoji.qml"
    Column {
        id: c1
	property int keyHeight: panel.keyHeight-panel.keyHeight*0.1
        anchors.fill: parent;
	spacing: 0

        Row {
            anchors.horizontalCenter: parent.horizontalCenter;
            spacing: 0
     ActionKey{width:panel.keyWidth;height:layout.height;visHeight:height}
     FlickCharKey {
                charlabel: layout.state == "caps" ? ["1", "À", "Â", "Á", "Ä"] : ["1", "à", "â", "á", "ä"];
                leaves: layout.state == "caps" ? ["1", "À", "Â", "Á", "Ä"] : ["1", "à", "â", "á", "ä"];
            }
            FlickCharKey {
                charlabel: layout.state == "caps" ? ["2", "Ù", "Û", "Ú", "Ü"] : ["2", "ù", "û", "ú", "ü"];
		leaves: layout.state == "caps" ? ["2", "Ù", "Û", "Ú", "Ü"] : ["2", "ù", "û", "ú", "ü"];
            }
            FlickCharKey {
                charlabel: layout.state == "caps" ? ["3", "Å", "Æ", "Ý", "Œ"] : ["3", "å", "æ", "ý", "œ"];
		leaves: layout.state == "caps" ? ["3", "Å", "Æ", "Ý", "Œ"] : ["3", "å", "æ", "ý", "œ"];
            }
            CaseSwitchKey { id: layout; labelright:true}
        }

        Row {
            anchors.horizontalCenter: parent.horizontalCenter;
            spacing: 0

            FlickCharKey {
                charlabel:  ["=", "", "±", "÷", "×"]
		labelleft:true
                leaves: ["=", "", "±", "÷", "×"]
            }
            FlickCharKey {
                charlabel: layout.state == "caps" ? ["4", "È", "Ê", "É", "Ë"] : ["4", "è", "ê", "é", "ë"];
                leaves: layout.state == "caps" ? ["4", "È", "Ê", "É", "Ë"] : ["4", "è", "ê", "é", "ë"];
            }
            FlickCharKey {
                charlabel: layout.state == "caps" ? ["5", "Ì", "Î", "Í", "Ï"] : ["5", "ì", "î", "í", "ï"];
                leaves: layout.state == "caps" ? ["5", "Ì", "Î", "Í", "Ï"] : ["5", "ì", "î", "í", "ï"];
            }
            FlickCharKey {
                charlabel: layout.state == "caps" ? ["6", "Ò", "Ô", "Ó", "Ö"] : ["6", "ò", "ô", "ó", "ö"];
                leaves: layout.state == "caps" ? ["6", "Ò", "Ô", "Ó", "Ö"] : ["6", "ò", "ô", "ó", "ö"];
            }
            FlickCharKey {
                charlabel: ["~", "™", "©", "", "®"]
		labelright:true
                leaves: ["~", "™", "©", "", "®"]

            }
        }

        Row {
            anchors.horizontalCenter: parent.horizontalCenter;
            spacing: 0

            CursorKey {id:cursorKey; leftSide:true}
	    FlickCharKey {
                charlabel: ["7", "»", "–", "«", "—"]
		leaves: ["7", "»", "–", "«", "—"]
            }
            FlickCharKey {
                charlabel: layout.state == "caps" ? ["8", "Ð", "Ñ", "Þ", "Ç"] : ["8", "ð", "ñ", "þ", "ç"]
		leaves: layout.state == "caps" ? ["8", "Ð", "Ñ", "Þ", "Ç"] : ["8", "ð", "ñ", "þ", "ç"]
            }
            FlickCharKey {
                charlabel: ["9", "£", "€", "¥", "₹"]
                leaves: ["9", "£", "€", "¥", "₹"]
            }
           CursorKey { rightSide:true; }
	 }

        Row {
            anchors.horizontalCenter: parent.horizontalCenter;
            spacing: 0

	LanguageKey {  width: panel.keyWidth; visHeight:layout.height;}
            FlickCharKey {
		 charlabel: [",", "“", "•", "”", "„"]
		 leaves: [",", "“", "•", "”", "„"]
	    }
	    FlickCharKey {
                charlabel: ["0", "§", "ª", "ß", "°"]
                leaves: ["0", "§", "ª", "ß", "°"]
            }
            FlickCharKey {
                charlabel: [".", "¡", "‽", "¿", "⸘"]
		leaves: [".", "¡", "‽", "¿", "⸘"]
	    }
            BackspaceKey { rightSide: true; width: panel.keyWidth;visHeight:layout.height;}
	}

   } // column
	Row{
	 anchors.horizontalCenter: parent.horizontalCenter;
	 anchors.left:parent.left
	 anchors.bottom:parent.bottom
	 spacing: 0

	    LayoutBar {
	        id: layoutBar;
		leaves: ["abc", "abc", "", "😃", ""];
	        width: parent.width;
	        height:layout.height-layout.height*0.5;
	        visHeight:height;
		fontSize:fontSize;
	    }

     }
}
