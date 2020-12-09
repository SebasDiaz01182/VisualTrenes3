#pragma once
#include "Paises.h"
#include "TipoTren.h"
#include "Ciudades.h"
#include "Rutas.h"
#include "Admin.h"
#include "Usuarios.h"
#include "Boleteria.h"
#include "CodRutas.h"
#include "Reservacion.h"
#include "UsuarioReservacion.h"

int mayor;
string paisAux;
string ultimoPais;
string ultimaCiudad;
string ultimaConexion;
string ultimoTren;
listaBoleteria reporteCiudad;
listaBoleteria reporteTren;
pNodoBinario paises;
pNodoTipoTren tipoTrenes;
listaC* rutas = new listaC();
BTree admins(3);
ArbolUsuario usuarios(5);

void CargarEstructuras() {

	pNodoBinario paises = CargarPaises();//Paises
	CargarCiudades(paises);//Ciudades
	CargarConexiones(paises);//Conexiones


	pNodoTipoTren tipoTrenes = CargarTipoTrenes();//Tipos de Tren
	CargarTrenes(tipoTrenes);//Trenes

	listaC* rutas = new listaC();
	rutas->CargarRutas(paises, tipoTrenes);//Rutas
	CargarCodRutas(tipoTrenes, *rutas); //CodRutas


	BTree admins(3);
	CargarAdmin(admins);//Carga admin

	ArbolUsuario usuarios(5);
	CargarUsuarios(usuarios, paises);//Carga usuarios
}