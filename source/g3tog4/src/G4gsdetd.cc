// This code implementation is the intellectual property of
// the RD44 GEANT4 collaboration.
//
// By copying, distributing or modifying the Program (or any work
// based on the Program) you indicate your acceptance of this statement,
// and all its terms.
//
// $Id: G4gsdetd.cc,v 2.0 1998/07/02 16:16:41 gunter Exp $
// GEANT4 tag $Name: geant4-00 $
//
#include "G3toG4.hh"
#include "G3DetTable.hh"

class G4VSensitiveDetector;

void PG4gsdetd(RWCString tokens[])
{
    // fill the parameter containers
    G3fillParams(tokens,PTgsdetd);

    // interpret the parameters
    G4String chset = Spar[0];
    G4String chdet = Spar[1];
    G4int nd = Ipar[0];
    G4String chnmsd[100];
    for (G4int i=0; i<=nd; i++ ) chnmsd[i] = Spar[2+i].data();
    G4int *nbitsd = &Ipar[1];

    G4gsdetd(chset,chdet,nd,chnmsd,nbitsd);
}

void G4gsdetd(G4String chset, G4String, G4int nd, G4String chnmsd[],
              G4int nbitsd[])
{
    // Get pointer to detector chset
    G4VSensitiveDetector* sdet = G3Det.get(chset);
    // Add hits to sensitive detector
    for (G4int i=0; i<nd; i++) {
      // $$$        sdet->AddDigi(chnmsd[i],nbitsd[i]);
    }
}