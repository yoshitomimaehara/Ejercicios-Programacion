VERSION 5.00
Begin VB.Form Form7 
   Caption         =   "Form7"
   ClientHeight    =   3930
   ClientLeft      =   60
   ClientTop       =   450
   ClientWidth     =   6525
   LinkTopic       =   "Form7"
   ScaleHeight     =   3930
   ScaleWidth      =   6525
   StartUpPosition =   3  'Windows Default
   Begin VB.CommandButton Command1 
      Caption         =   "ejecutar"
      Height          =   855
      Left            =   5160
      TabIndex        =   8
      Top             =   720
      Width           =   1095
   End
   Begin VB.TextBox Text4 
      Height          =   375
      Left            =   2880
      TabIndex        =   7
      Top             =   2280
      Width           =   1935
   End
   Begin VB.TextBox Text3 
      Height          =   375
      Left            =   2880
      TabIndex        =   6
      Top             =   1680
      Width           =   1935
   End
   Begin VB.TextBox Text2 
      Height          =   405
      Left            =   2880
      TabIndex        =   5
      Top             =   960
      Width           =   1935
   End
   Begin VB.TextBox Text1 
      Height          =   405
      Left            =   2880
      TabIndex        =   4
      Top             =   240
      Width           =   1935
   End
   Begin VB.Label Label5 
      Height          =   495
      Left            =   2760
      TabIndex        =   9
      Top             =   3000
      Width           =   2055
   End
   Begin VB.Label Label4 
      Caption         =   "ingrese un #"
      Height          =   255
      Left            =   240
      TabIndex        =   3
      Top             =   2400
      Width           =   2175
   End
   Begin VB.Label Label3 
      Caption         =   "ingrese un #"
      Height          =   255
      Left            =   240
      TabIndex        =   2
      Top             =   1800
      Width           =   2055
   End
   Begin VB.Label Label2 
      Caption         =   "ingrese un #"
      Height          =   255
      Left            =   240
      TabIndex        =   1
      Top             =   1080
      Width           =   2055
   End
   Begin VB.Label Label1 
      Caption         =   "ingrese un #"
      Height          =   255
      Left            =   240
      TabIndex        =   0
      Top             =   360
      Width           =   2055
   End
End
Attribute VB_Name = "Form7"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Private Sub Command1_Click()
Dim a As Long
Dim b As Long
Dim c As Long
Dim d As Long

a = Val(Text1.Text)
b = Val(Text2.Text)
c = Val(Text3.Text)
d = Val(Text4.Text)

If a > b And b > c And c > d Then
Label5.Caption = a
Else
    If b > a And a > c And c > d Then
    Label5.Caption = b
    Else
        If c > a And a > b And b > d Then
        Label5.Caption = c
        Else
            If d > a And a > b And b > c Then
            Label5.Caption = d
            End If
        End If
    End If
End If

            
        
    


End Sub



