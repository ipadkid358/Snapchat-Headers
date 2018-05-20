/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:49 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCDownSwipableViewController.h>
#import <Snapchat/SCSearchStoryRatingViewDelegate.h>
#import <Snapchat/SCBugReportDrawOnAttachmentViewControllerDelegate.h>

@protocol SCSearchStoryRatingViewControllerDelegate;
@class SCSearchDynamicStory, NSString, CLLocation, NSArray, SCSearchStoryRatingView, SCSearchStoryRatingViewConfiguration, UIImage, NSURLSession;

@interface SCSearchStoryRatingViewController : SCDownSwipableViewController <SCSearchStoryRatingViewDelegate, SCBugReportDrawOnAttachmentViewControllerDelegate> {

	SCSearchDynamicStory* _ratedStory;
	NSString* _queryText;
	CLLocation* _queryLocation;
	NSString* _sectionType;
	NSArray* _sectionTitles;
	SCSearchStoryRatingView* _ratingView;
	SCSearchStoryRatingViewConfiguration* _ratingViewConfig;
	UIImage* _screenshot;
	NSURLSession* _imageUpdateSession;
	BOOL _viewHasAppeared;
	id<SCSearchStoryRatingViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SCSearchStoryRatingViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_animateWithKeyboardVisible:(BOOL)arg1 notification:(id)arg2 ;
-(void)downSwipeSucceed;
-(void)drawOnAttachmentViewController:(id)arg1 didChangeAttachmentImage:(id)arg2 ;
-(void)drawOnAttachmentViewControllerDidDeleteImage:(id)arg1 ;
-(void)searchStoryRatingView:(id)arg1 didSubmitWithRatingInfo:(id)arg2 comment:(id)arg3 ;
-(void)searchStoryRatingViewDidCancel:(id)arg1 ;
-(void)searchStoryRatingView:(id)arg1 didTapOnAttachmentView:(id)arg2 ;
-(void)_presentViewAnimatedWithFrame:(CGRect)arg1 duration:(double)arg2 ;
-(void)_submitWithRatingInfo:(id)arg1 ;
-(void)_ratingFailedToSubmit;
-(void)_ratingDidSubmit;
-(void)_setRatingViewFrame:(CGRect)arg1 ;
-(id)initWithDynamicStory:(id)arg1 queryText:(id)arg2 queryLocation:(id)arg3 sectionType:(id)arg4 screenshot:(id)arg5 ;
-(id)initWithSectionTitles:(id)arg1 locationString:(id)arg2 screenshot:(id)arg3 ;
-(void)setDelegate:(id<SCSearchStoryRatingViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<SCSearchStoryRatingViewControllerDelegate>)delegate;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)_keyboardWillShow:(id)arg1 ;
-(void)_keyboardWillHide:(id)arg1 ;
@end
