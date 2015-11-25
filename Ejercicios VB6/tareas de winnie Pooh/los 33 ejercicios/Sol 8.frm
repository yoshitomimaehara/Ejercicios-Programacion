VERSION 5.00
Begin VB.Form Form9 
   Caption         =   "Form9"
   ClientHeight    =   3135
   ClientLeft      =   60
   ClientTop       =   345
   ClientWidth     =   4830
   LinkTopic       =   "Form9"
   ScaleHeight     =   3135
   ScaleWidth      =   4830
   StartUpPosition =   3  'Windows Default
   Begin VB.TextBox Text1 
      Height          =   285
      Left            =   1200
      TabIndex        =   4
      Top             =   120
      Width           =   2175
   End
   Begin VB.TextBox Text2 
      Height          =   285
      Left            =   1200
      TabIndex        =   3
      Top             =   600
      Width           =   2175
   End
   Begin VB.TextBox Text3 
      Height          =   285
      Left            =   1200
      TabIndex        =   2
      Top             =   1080
      Width           =   2175
   End
   Begin VB.CommandButton Command1 
      Caption         =   "Resolver"
      Height          =   375
      Left            =   3480
      TabIndex        =   1
      Top             =   960
      Width           =   1095
   End
   Begin VB.CommandButton Command2 
      Caption         =   "Limpiar"
      Height          =   375
      Left            =   3480
      TabIndex        =   0
      Top             =   1560
      Width           =   1095
   End
   Begin VB.Label Label1 
      BorderStyle     =   1  'Fixed Single
      Height          =   375
      Left            =   960
      TabIndex        =   11
      Top             =   1800
      Width           =   2295
   End
   Begin VB.Label Label2 
      BorderStyle     =   1  'Fixed Single
      Height          =   375
      Left            =   960
      TabIndex        =   10
      Top             =   2520
      Width           =   2295
   End
   Begin VB.Label Label3 
      Caption         =   "Ingresa a"
      Height          =   255
      Left            =   120
      TabIndex        =   9
      Top             =   120
      Width           =   855
   End
   Begin VB.Label Label4 
      Caption         =   "Ingresa b"
      Height          =   255
      Left            =   120
      TabIndex        =   8
      Top             =   600
      Width           =   855
   End
   Begin VB.Label Label5 
      Caption         =   "Ingresa c"
      Height          =   255
      Left            =   120
      TabIndex        =   7
      Top             =   1080
      Width           =   855
   End
   Begin VB.Label Label6 
      Caption         =   "X1 o X"
      Height          =   375
      Left            =   240
      TabIndex        =   6
      Top             =   1800
      Width           =   615
   End
   Begin VB.Label Label7 
      Caption         =   "X2"
      Height          =   375
      Left            =   480
      TabIndex        =   5
      Top             =   2520
      Width           =   255
   End
End
Attribute VB_Name = "Form9"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Private Sub Command1_Click()
Dim a As Currency
Dim b As Currency
Dim c As Currency
Dim x As Currency
Dim x2 As Currency
Dim x1 As Currency

a = Val(Text1.Text)
b = Val(Text2.Text)
c = Val(Text3.Text)

d = (b ^ 2) - 4 * a * c

If d = 0 Then
x = -b / 2 * a
Label1.Caption = x
Else
If d < 0 Then
MsgBox "es imaginario", 32, "no sale ps"
Else
If d > 0 Then
x1 = -b + (d) ^ (1 / 2) / 2 * a
x2 = -b - (d) ^ (1 / 2) / 2 * a
Label1.Caption = x1
Label2.Caption = x2
End If
End If
End If
End Sub


