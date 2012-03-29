//
//  AVViewController.h
//  AVCamWithStoryboard
//
//  Created by Kevin Muldoon on 3/29/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class AVCamCaptureManager, AVCamPreviewView, AVCaptureVideoPreviewLayer;

@interface AVViewController : UIViewController <UIImagePickerControllerDelegate,UINavigationControllerDelegate> {
}

@property (nonatomic) AVCamCaptureManager *captureManager;
@property (nonatomic) IBOutlet UIView *videoPreviewView;
@property (nonatomic) AVCaptureVideoPreviewLayer *captureVideoPreviewLayer;
@property (nonatomic) IBOutlet UIBarButtonItem *cameraToggleButton;
@property (nonatomic) IBOutlet UIBarButtonItem *recordButton;
@property (nonatomic) IBOutlet UIBarButtonItem *stillButton;
@property (nonatomic) IBOutlet UILabel *focusModeLabel;

#pragma mark Toolbar Actions
- (IBAction)toggleRecording:(id)sender;
- (IBAction)captureStillImage:(id)sender;
- (IBAction)toggleCamera:(id)sender;

@end
