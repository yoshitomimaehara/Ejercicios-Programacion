VERSION 5.00
Begin VB.Form Form1 
   Caption         =   "Ventas de Productos:"
   ClientHeight    =   6150
   ClientLeft      =   60
   ClientTop       =   345
   ClientWidth     =   7245
   LinkTopic       =   "Form1"
   MaxButton       =   0   'False
   MinButton       =   0   'False
   ScaleHeight     =   6150
   ScaleWidth      =   7245
   StartUpPosition =   3  'Windows Default
   Begin VB.CommandButton Command2 
      Caption         =   "CALCULAR"
      Height          =   375
      Left            =   2640
      TabIndex        =   13
      Top             =   2520
      Width           =   1695
   End
   Begin VB.CommandButton Command1 
      Caption         =   "OTRA VENTA"
      Height          =   375
      Left            =   2640
      TabIndex        =   12
      Top             =   4920
      Width           =   1695
   End
   Begin VB.TextBox Text3 
      Height          =   375
      Left            =   3840
      TabIndex        =   2
      Top             =   1560
      Width           =   1935
   End
   Begin VB.TextBox Text2 
      Height          =   375
      Left            =   3840
      TabIndex        =   1
      Top             =   1080
      Width           =   1935
   End
   Begin VB.TextBox Text1 
      Height          =   375
      Left            =   3840
      TabIndex        =   0
      Top             =   600
      Width           =   1935
   End
   Begin VB.Label Label9 
      BorderStyle     =   1  'Fixed Single
      Height          =   375
      Left            =   3840
      TabIndex        =   11
      Top             =   4320
      Width           =   1935
   End
   Begin VB.Label Label8 
      BorderStyle     =   1  'Fixed Single
      Height          =   375
      Left            =   3840
      TabIndex        =   10
      Top             =   3720
      Width           =   1935
   End
   Begin VB.Label Label7 
      BorderStyle     =   1  'Fixed Single
      Height          =   375
      Left            =   3840
      TabIndex        =   9
      Top             =   3120
      Width           =   1935
   End
   Begin VB.Label Label6 
      BorderStyle     =   1  'Fixed Single
      Caption         =   "Monto Total"
      Height          =   375
      Left            =   1560
      TabIndex        =   8
      Top             =   4320
      Width           =   1695
   End
   Begin VB.Label Label5 
      BorderStyle     =   1  'Fixed Single
      Caption         =   "I.G.V (19%)"
      Height          =   375
      Left            =   1560
      TabIndex        =   7
      Top             =   3720
      Width           =   1695
   End
   Begin VB.Label Label4 
      BorderStyle     =   1  'Fixed Single
      Caption         =   "Monto Neto"
      Height          =   375
      Left            =   1560
      TabIndex        =   6
      Top             =   3120
      Width           =   1695
   End
   Begin VB.Label Label3 
      BorderStyle     =   1  'Fixed Single
      Caption         =   "Precio"
      Height          =   375
      Left            =   1560
      TabIndex        =   5
      Top             =   1560
      Width           =   1695
   End
   Begin VB.Label Label2 
      BorderStyle     =   1  'Fixed Single
      Caption         =   "Cantidad"
      Height          =   375
      Left            =   1560
      TabIndex        =   4
      Top             =   1080
      Width           =   1695
   End
   Begin VB.Label Label1 
      BorderStyle     =   1  'Fixed Single
      Caption         =   "Nombre del producto"
      Height          =   375
      Left            =   1560
      TabIndex        =   3
      Top             =   600
      Width           =   1695
   End
   Begin VB.Line Line1 
      BorderWidth     =   3
      X1              =   1560
      X2              =   5760
      Y1              =   2280
      Y2              =   2280
   End
End
Attribute VB_Name = "Form1"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Private Sub Command1_Click()
Text1.Text = ""
Text2.Text = ""
Text3.Text = ""
Label7.Caption = ""
Label8.Caption = ""
Label9.Caption = ""
Text1.SetFocus
End Sub

Private Sub Command2_Click()
Dim n As String
Dim c As Byte
Dim p As Currency
Dim mn As Currency
Dim igv As Currency
Dim mt As Currency

n = Text1.Text
c = Val(Text2.Text)
p = Val(Text3.Text)

mn = c * p
Label7.Caption = mn
 
igv = mn * 0.19
Label8.Caption = igv

mt = mn + igv
Label9.Caption = mt

End Sub
