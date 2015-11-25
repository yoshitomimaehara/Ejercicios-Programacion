VERSION 5.00
Begin VB.Form Form2 
   Caption         =   "Solucion 8-2"
   ClientHeight    =   4650
   ClientLeft      =   60
   ClientTop       =   450
   ClientWidth     =   6015
   LinkTopic       =   "Form2"
   ScaleHeight     =   4650
   ScaleWidth      =   6015
   StartUpPosition =   3  'Windows Default
   Begin VB.CommandButton Command1 
      Caption         =   "Hallar"
      Height          =   495
      Left            =   3720
      TabIndex        =   7
      Top             =   1200
      Width           =   1575
   End
   Begin VB.TextBox Text2 
      Height          =   375
      Left            =   1800
      TabIndex        =   2
      Top             =   1920
      Width           =   1095
   End
   Begin VB.TextBox Text1 
      Height          =   375
      Left            =   1800
      TabIndex        =   1
      Top             =   1200
      Width           =   1095
   End
   Begin VB.Label Label7 
      BackColor       =   &H80000009&
      BorderStyle     =   1  'Fixed Single
      Height          =   375
      Left            =   4320
      TabIndex        =   9
      Top             =   3000
      Width           =   1335
   End
   Begin VB.Label Label6 
      BackColor       =   &H80000009&
      BorderStyle     =   1  'Fixed Single
      Height          =   375
      Left            =   1920
      TabIndex        =   8
      Top             =   3000
      Width           =   1095
   End
   Begin VB.Label Label5 
      Alignment       =   2  'Center
      Caption         =   "Suma"
      Height          =   375
      Left            =   3480
      TabIndex        =   6
      Top             =   3000
      Width           =   615
   End
   Begin VB.Label Label4 
      Alignment       =   2  'Center
      Caption         =   "Multiplicación"
      Height          =   375
      Left            =   240
      TabIndex        =   5
      Top             =   3000
      Width           =   1455
   End
   Begin VB.Label Label3 
      Caption         =   "segundo numero"
      Height          =   375
      Left            =   240
      TabIndex        =   4
      Top             =   1920
      Width           =   1215
   End
   Begin VB.Label Label2 
      Caption         =   "primer numero"
      Height          =   375
      Left            =   240
      TabIndex        =   3
      Top             =   1200
      Width           =   1215
   End
   Begin VB.Label Label1 
      Alignment       =   2  'Center
      Caption         =   "multiplicacion y suma"
      Height          =   375
      Left            =   1560
      TabIndex        =   0
      Top             =   240
      Width           =   3255
   End
End
Attribute VB_Name = "Form2"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Private Sub Command1_Click()
Dim a As Integer
Dim b As Integer
Dim m As Integer
Dim s As Integer

a = Text1.Text
b = Text2.Text

s = a + b
m = a * b

Label6.Caption = s
Label6.Caption = m



End Sub

