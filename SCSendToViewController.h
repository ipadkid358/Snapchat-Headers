/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:30 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol SCSendToViewController <NSObject,UITextFieldDelegate,UIAlertViewDelegate,SCContactsCTAFooterViewDelegate>
@property (assign,nonatomic) double lastExitTime; 
@property (assign,nonatomic) BOOL userDidPressSend; 
@property (nonatomic,retain) id<SCSendPreviewViewModel> previewViewModel; 
@property (nonatomic,copy) NSString * pageType; 
@optional
-(void)updateStoryThumbnailForEphemeralMedia:(id)arg1;
-(void)setPreviewBlob:(id)arg1;

@required
+(id)pageViewName;
-(void)setPreviewViewModel:(id)arg1;
-(void)sendGroupPressed;
-(id)selectionResult;
-(void)logStoriesSelectionWithLoggingParameters:(id)arg1;
-(double)lastExitTime;
-(void)setLastExitTime:(double)arg1;
-(BOOL)userDidPressSend;
-(void)setUserDidPressSend:(BOOL)arg1;
-(id<SCSendPreviewViewModel>)previewViewModel;
-(void)dismissViewControllerAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2;
-(void)dismiss;
-(void)setPageType:(id)arg1;
-(NSString *)pageType;

@end
