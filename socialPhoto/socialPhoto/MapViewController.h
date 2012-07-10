//
//  MapViewController.h
//  MapAppGrid
//
//  Created by Le Quan on 7/5/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MapKit/MapKit.h> 
#import <CoreLocation/CoreLocation.h>
#import "SBJson.h"
#import "LocationPin.h"
#import "ImagePin.h"
#import "ImageGridView.h"

@interface MapViewController : UIViewController <MKMapViewDelegate, UISearchBarDelegate, ImageGridViewDelegate, ImageGridViewDataSource>

@property (unsafe_unretained, nonatomic) IBOutlet UISearchBar *search;

@property (unsafe_unretained, nonatomic) IBOutlet MKMapView *myMap;

@property (nonatomic, retain) CLLocationManager *locationManager;

@end
