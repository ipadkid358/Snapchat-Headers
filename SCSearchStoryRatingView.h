/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:49 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <Snapchat/SCSearchStoryRatingRowViewDelegate.h>
#import <UIKit/UITextViewDelegate.h>

@protocol SCSearchStoryRatingViewDelegate;
@class UILabel, NSMutableArray, NSArray, UIImageView, UITextView, SCButton, SCSearchDynamicStory, NSString, SCSearchStoryRatingViewConfiguration;

@interface SCSearchStoryRatingView : UIView <SCSearchStoryRatingRowViewDelegate, UITextViewDelegate> {

	UILabel* _titleLabel;
	NSMutableArray* _ratingRows;
	NSMutableArray* _ratings;
	NSArray* _ratingLoggingKeys;
	UIImageView* _attachmentViewScreenshot;
	UITextView* _commentTextView;
	NSArray* _flagButtons;
	NSMutableArray* _flagValues;
	NSArray* _flagLoggingKeys;
	SCButton* _submitButton;
	SCButton* _cancelButton;
	SCSearchDynamicStory* _dynamicStory;
	NSString* _queryText;
	SCSearchStoryRatingViewConfiguration* _configuration;
	id<SCSearchStoryRatingViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SCSearchStoryRatingViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)searchStoryRatingRowView:(id)arg1 didChangeWithRating:(long long)arg2 ;
-(void)singleTapScreenshotAttachment:(id)arg1 ;
-(void)_flagButtonDidTap:(id)arg1 ;
-(void)_submitButtonDidTap:(id)arg1 ;
-(void)_cancelButtonDidTap:(id)arg1 ;
-(id)initWithDynamicStory:(id)arg1 configuration:(id)arg2 ;
-(void)updateScreenshot:(id)arg1 ;
-(void)layoutSubviews;
-(void)setDelegate:(id<SCSearchStoryRatingViewDelegate>)arg1 ;
-(id<SCSearchStoryRatingViewDelegate>)delegate;
-(BOOL)resignFirstResponder;
-(void)reset;
-(void)textViewDidBeginEditing:(id)arg1 ;
-(void)textViewDidEndEditing:(id)arg1 ;
@end

