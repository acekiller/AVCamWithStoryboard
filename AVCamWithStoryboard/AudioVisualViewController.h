//
//  AudioVisualViewController.h
//  AVCamWithStoryboard
//
//  Created by Kevin Muldoon on 3/29/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class AVCamCaptureManager, AVCamPreviewView, AVCaptureVideoPreviewLayer;

@interface AudioVisualViewController : UIViewController <UIImagePickerControllerDelegate, UINavigationControllerDelegate> {
}

@property (nonatomic,retain) AVCamCaptureManager *captureManager;
@property (nonatomic,retain) IBOutlet UIView *videoPreviewView;
@property (nonatomic,retain) AVCaptureVideoPreviewLayer *captureVideoPreviewLayer;
@property (nonatomic,retain) IBOutlet UIBarButtonItem *cameraToggleButton;
@property (nonatomic,retain) IBOutlet UIBarButtonItem *recordButton;
@property (nonatomic,retain) IBOutlet UIBarButtonItem *stillButton;
@property (nonatomic,retain) IBOutlet UILabel *focusModeLabel;
@property (strong, nonatomic) IBOutlet UIToolbar *myToolbar;

#pragma mark Toolbar Actions
- (IBAction)toggleRecording:(id)sender;
- (IBAction)captureStillImage:(id)sender;
- (IBAction)toggleCamera:(id)sender;

@end

