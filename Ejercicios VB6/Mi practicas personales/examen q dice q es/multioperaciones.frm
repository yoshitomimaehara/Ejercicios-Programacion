VERSION 5.00
Begin VB.Form Form1 
   Caption         =   "Form1"
   ClientHeight    =   6135
   ClientLeft      =   60
   ClientTop       =   345
   ClientWidth     =   6330
   LinkTopic       =   "Form1"
   ScaleHeight     =   6135
   ScaleWidth      =   6330
   StartUpPosition =   3  'Windows Default
   Begin VB.CommandButton Command2 
      Caption         =   "Limpiar"
      Height          =   495
      Left            =   3840
      TabIndex        =   16
      Top             =   2400
      Width           =   1695
   End
   Begin VB.CommandButton Command1 
      Caption         =   "Resolver"
      Height          =   495
      Left            =   3720
      TabIndex        =   15
      Top             =   1200
      Width           =   1815
   End
   Begin VB.TextBox Text2 
      Height          =   375
      Left            =   1440
      TabIndex        =   4
      Top             =   1800
      Width           =   1575
   End
   Begin VB.TextBox Text1 
      Height          =   375
      Left            =   1440
      TabIndex        =   3
      Top             =   1080
      Width           =   1575
   End
   Begin VB.Label Label13 
      Caption         =   "Porcentaje"
      Height          =   255
      Left            =   240
      TabIndex        =   14
      Top             =   5400
      Width           =   855
   End
   Begin VB.Label Label12 
      Caption         =   "Division"
      Height          =   255
      Left            =   480
      TabIndex        =   13
      Top             =   4680
      Width           =   615
   End
   Begin VB.Label Label11 
      Caption         =   "Multiplicacion"
      Height          =   255
      Left            =   120
      TabIndex        =   12
      Top             =   3960
      Width           =   975
   End
   Begin VB.Label Label10 
      Caption         =   "Resta"
      Height          =   255
      Left            =   600
      TabIndex        =   11
      Top             =   3240
      Width           =   495
   End
   Begin VB.Label Label9 
      Caption         =   "Suma"
      Height          =   255
      Left            =   600
      TabIndex        =   10
      Top             =   2520
      Width           =   495
   End
   Begin VB.Label Label8 
      BackColor       =   &H80000009&
      BorderStyle     =   1  'Fixed Single
      Height          =   375
      Left            =   1440
      TabIndex        =   9
      Top             =   5400
      Width           =   1575
   End
   Begin VB.Label Label7 
      BackColor       =   &H80000009&
      BorderStyle     =   1  'Fixed Single
      Height          =   375
      Left            =   1440
      TabIndex        =   8
      Top             =   4680
      Width           =   1575
   End
   Begin VB.Label Label6 
      BackColor       =   &H80000009&
      BorderStyle     =   1  'Fixed Single
      Height          =   375
      Left            =   1440
      TabIndex        =   7
      Top             =   3960
      Width           =   1575
   End
   Begin VB.Label Label5 
      BackColor       =   &H80000009&
      BorderStyle     =   1  'Fixed Single
      Height          =   375
      Left            =   1440
      TabIndex        =   6
      Top             =   3240
      Width           =   1575
   End
   Begin VB.Label Label4 
      BackColor       =   &H80000009&
      BorderStyle     =   1  'Fixed Single
      Height          =   375
      Left            =   1440
      TabIndex        =   5
      Top             =   2520
      Width           =   1575
   End
   Begin VB.Line Line1 
      X1              =   1200
      X2              =   3360
      Y1              =   2280
      Y2              =   2280
   End
   Begin VB.Label Label3 
      Caption         =   "2do  Numero"
      Height          =   255
      Left            =   240
      TabIndex        =   2
      Top             =   1800
      Width           =   975
   End
   Begin VB.Label Label2 
      Caption         =   "1er Numero"
      Height          =   255
      Left            =   240
      TabIndex        =   1
      Top             =   1200
      Width           =   975
   End
   Begin VB.Label Label1 
      BackStyle       =   0  'Transparent
      Caption         =   "Operaciones"
      BeginProperty Font 
         Name            =   "Comic Sans MS"
         Size            =   27.75
         Charset         =   0
         Weight          =   400
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      Height          =   735
      Left            =   1320
      TabIndex        =   0
      Top             =   120
      Width           =   3495
   End
End
Attribute VB_Name = "Form1"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Private Sub Command1_Click()
Dim x As Currency
Dim y As Currency
Dim s As Integer
Dim r As Currency
Dim m As Integer
Dim d As Currency
Dim p As Currency

x = Text1.Text
y = Text2.Text

s = x + y
r = x - y
m = x * y
If y <> 0 Then
d = x / y
Label7.Caption = d
Else
MsgBox "error", 16, "sistema"
End If
p = x * (y / 100)

Label4.Caption = s
Label5.Caption = r
Label6.Caption = m
Label8.Caption = p

End Sub

Private Sub Command2_Click()
Text1.Text = ""
Text2.Text = ""
Label4.Caption = ""
Label5.Caption = ""
Label6.Caption = ""
Label7.Caption = ""
Label5.Caption = ""
Label8.Caption = ""
Text1.SetFocus
End Sub
