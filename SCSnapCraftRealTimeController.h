/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:32 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCSnapCraftRealTimeBaseController.h>
#import <Snapchat/SCCraftControllerDelegate.h>

@class UIImageView, SCCraftProcessingModel, SnapcraftMetalModel, SCSnapCraftConcreteController, NSTimer, NSString;

@interface SCSnapCraftRealTimeController : SCSnapCraftRealTimeBaseController <SCCraftControllerDelegate> {

	CGSize _captureSize;
	UIImageView* _stylizedImageView;
	SCCraftProcessingModel* _selectedModel;
	BOOL _stylizingInProgress;
	SnapcraftMetalModel* _metalModel;
	SCSnapCraftConcreteController* _snapCraftController;
	NSTimer* _captureTimer;
	BOOL _shouldSeamlessClone;
	BOOL _enableSnapPrettyMode;
	BOOL _debugMode;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setupView:(id)arg1 ;
-(void)updateStylizedImage:(id)arg1 styleId:(id)arg2 ;
-(void)closedCraftPicker;
-(void)openedCraftPicker;
-(void)showSnapcraftVideo:(id)arg1 ;
-(void)didPickStyle:(id)arg1 ;
-(void)craftStylizingWillBegin;
-(void)craftStylizingDidEnd;
-(id)init:(id)arg1 shouldSeamlessClone:(BOOL)arg2 enableSnapPrettyMode:(BOOL)arg3 debugMode:(BOOL)arg4 ;
-(void)handleSwipeDown:(id)arg1 ;
-(void)captureSC;
-(CGSize)_computeCaptureDimension;
-(void)setupMetalModel:(id)arg1 ;
-(void)toggleVisibility;
-(void)stopCapture;
-(void)startCapture;
@end

