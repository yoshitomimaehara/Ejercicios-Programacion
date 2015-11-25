VERSION 5.00
Begin VB.Form Form9 
   Caption         =   "Form9"
   ClientHeight    =   4890
   ClientLeft      =   60
   ClientTop       =   450
   ClientWidth     =   6705
   LinkTopic       =   "Form9"
   ScaleHeight     =   4890
   ScaleWidth      =   6705
   StartUpPosition =   3  'Windows Default
   Begin VB.CommandButton Command1 
      Caption         =   "ejecutar"
      Height          =   1095
      Left            =   5520
      TabIndex        =   6
      Top             =   1080
      Width           =   975
   End
   Begin VB.TextBox Text3 
      Height          =   375
      Left            =   3000
      TabIndex        =   5
      Top             =   2160
      Width           =   2175
   End
   Begin VB.TextBox Text2 
      Height          =   375
      Left            =   3000
      TabIndex        =   4
      Top             =   1320
      Width           =   2055
   End
   Begin VB.TextBox Text1 
      Height          =   375
      Left            =   3000
      TabIndex        =   3
      Top             =   600
      Width           =   2055
   End
   Begin VB.Label Label5 
      Height          =   735
      Left            =   2760
      TabIndex        =   8
      Top             =   3960
      Width           =   2415
   End
   Begin VB.Label Label4 
      Height          =   615
      Left            =   2880
      TabIndex        =   7
      Top             =   2880
      Width           =   2175
   End
   Begin VB.Label Label3 
      Caption         =   "ingrese el 3er numero"
      Height          =   375
      Left            =   480
      TabIndex        =   2
      Top             =   2280
      Width           =   1815
   End
   Begin VB.Label Label2 
      Caption         =   "ingrese el 2do numero"
      Height          =   495
      Left            =   480
      TabIndex        =   1
      Top             =   1320
      Width           =   1575
   End
   Begin VB.Label Label1 
      Caption         =   "ingrese el 1er numero"
      Height          =   375
      Left            =   480
      TabIndex        =   0
      Top             =   600
      Width           =   1695
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
Dim d As Currency
Dim x As Currency
Dim x1 As Currency
Dim x2 As Currency
a = Val(Text1.Text)
b = Val(Text2.Text)
c = Val(Text3.Text)

d = b ^ 2 - 4 * a * c
If d < 0 Then
Label4.Caption = "imaginarios"
Else
    If d = 0 Then
    x = -b / 2 * a
    Label4.Caption = x
    Else
        If d > 0 Then
        x1 = (-b + (d) ^ 1 / 2) / 2 * a
        x2 = (-b - (d) ^ 1 / 2) / 2 * a
Label4.Caption = x1
Label5.Caption = x2
End If
End If
End If

End Sub


