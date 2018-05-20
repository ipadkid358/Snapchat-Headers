/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:49 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@protocol SCSearchStoryRatingRowViewDelegate;
@class UILabel, NSArray, SCSearchStoryRatingRowViewConfiguration;

@interface SCSearchStoryRatingRowView : UIView {

	UILabel* _descriptionLabel;
	NSArray* _ratingButtons;
	unsigned long long _numberOfLines;
	id<SCSearchStoryRatingRowViewDelegate> _delegate;
	SCSearchStoryRatingRowViewConfiguration* _configuration;

}

@property (assign,nonatomic,__weak) id<SCSearchStoryRatingRowViewDelegate> delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) SCSearchStoryRatingRowViewConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
-(void)_ratingButtonDidTap:(id)arg1 ;
-(id)initWithConfiguration:(id)arg1 numberOfLines:(unsigned long long)arg2 ;
-(void)layoutSubviews;
-(void)setDelegate:(id<SCSearchStoryRatingRowViewDelegate>)arg1 ;
-(id<SCSearchStoryRatingRowViewDelegate>)delegate;
-(void)reset;
-(SCSearchStoryRatingRowViewConfiguration *)configuration;
@end

