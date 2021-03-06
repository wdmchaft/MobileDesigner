//
//  NewProjectViewController.h
//  MobileDesigner
//

#import <UIKit/UIKit.h>
#import <MapKit/MapKit.h>
#import <CoreLocation/CoreLocation.h>
#import "ProjectRoutingDelegates.h"


@interface NewProjectViewController : UIViewController <UITextFieldDelegate, MKMapViewDelegate, CLLocationManagerDelegate> {
	UITextField* projectTitleField;
	UITextField* widthField;
	UITextField* heightField;
	UIButton* mapItButton;
	UIButton* okButton;
	UIButton* cancelButton;
	UILabel *textureAttachedLabel;
	MKMapView *mapView;
	CLLocationCoordinate2D location;
	BOOL mappingLocation;
	BOOL hasCenteredMap;
	id <ProjectCreatorDelegate> delegate;
	CLLocationManager *locationManager;
}

@property (retain) IBOutlet UITextField *projectTitleField;
@property (retain) IBOutlet UITextField *widthField;
@property (retain) IBOutlet UITextField *heightField;
@property (retain) IBOutlet UIButton *mapItButton;
@property (retain) IBOutlet UIButton *okButton;
@property (retain) IBOutlet UIButton *cancelButton;
@property (retain) IBOutlet UILabel *textureAttachedLabel;
@property (nonatomic, retain) id <ProjectCreatorDelegate> delegate;


- (IBAction)okPressed:(UIButton*)sender;
- (IBAction)cancelPressed:(UIButton*)sender;
- (IBAction)mapItButtonPressed:(UIButton*)sender;

@end
