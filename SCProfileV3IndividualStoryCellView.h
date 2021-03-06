/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:30 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCProfileV3CellView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol SCProfileV3IndividualStoryCellViewDelegate;
@class SCProfileV3IndividualStoryCellViewModel, SCFriendLongPressGestureRecognizer, SCStoryIconView, UIColor, SCLoadingIndicatorView, UILabel, UIImageView, UIButton, Story, SCSingleIconConfigurer, SCPieSliceView, NSString;

@interface SCProfileV3IndividualStoryCellView : SCProfileV3CellView <UIGestureRecognizerDelegate> {

	SCProfileV3IndividualStoryCellViewModel* _viewModel;
	SCFriendLongPressGestureRecognizer* _longPressGestureRecognizer;
	BOOL _animatingHighlight;
	id<SCProfileV3IndividualStoryCellViewDelegate> _storyDelegate;
	SCStoryIconView* _storyIconView;
	UIColor* _primaryColor;
	UIColor* _secondaryColor;
	SCLoadingIndicatorView* _saveAndDeleteActivityIndicator;
	UILabel* _captionLabel;
	UILabel* _screenshotCountLabel;
	UIImageView* _screenshotIcon;
	UIButton* _saveButton;
	UIButton* _deleteButton;
	UIButton* _viewersButton;
	Story* _story;
	Story* _previousStory;
	UILabel* _subLabel;
	SCSingleIconConfigurer* _singleIconConfigurer;
	UILabel* _viewedCountLabel;
	UILabel* _progressLabel;
	UIImageView* _viewedIcon;
	SCPieSliceView* _pieSliceView;

}

@property (nonatomic,retain) UIColor * primaryColor;                                                           //@synthesize primaryColor=_primaryColor - In the implementation block
@property (nonatomic,retain) UIColor * secondaryColor;                                                         //@synthesize secondaryColor=_secondaryColor - In the implementation block
@property (nonatomic,retain) SCLoadingIndicatorView * saveAndDeleteActivityIndicator;                          //@synthesize saveAndDeleteActivityIndicator=_saveAndDeleteActivityIndicator - In the implementation block
@property (nonatomic,retain) UILabel * captionLabel;                                                           //@synthesize captionLabel=_captionLabel - In the implementation block
@property (nonatomic,retain) UILabel * screenshotCountLabel;                                                   //@synthesize screenshotCountLabel=_screenshotCountLabel - In the implementation block
@property (nonatomic,retain) UIImageView * screenshotIcon;                                                     //@synthesize screenshotIcon=_screenshotIcon - In the implementation block
@property (nonatomic,retain) UIButton * saveButton;                                                            //@synthesize saveButton=_saveButton - In the implementation block
@property (nonatomic,retain) UIButton * deleteButton;                                                          //@synthesize deleteButton=_deleteButton - In the implementation block
@property (nonatomic,retain) UIButton * viewersButton;                                                         //@synthesize viewersButton=_viewersButton - In the implementation block
@property (nonatomic,retain) Story * story;                                                                    //@synthesize story=_story - In the implementation block
@property (nonatomic,retain) Story * previousStory;                                                            //@synthesize previousStory=_previousStory - In the implementation block
@property (nonatomic,retain) UILabel * subLabel;                                                               //@synthesize subLabel=_subLabel - In the implementation block
@property (nonatomic,retain) SCSingleIconConfigurer * singleIconConfigurer;                                    //@synthesize singleIconConfigurer=_singleIconConfigurer - In the implementation block
@property (nonatomic,retain) UILabel * viewedCountLabel;                                                       //@synthesize viewedCountLabel=_viewedCountLabel - In the implementation block
@property (nonatomic,retain) UILabel * progressLabel;                                                          //@synthesize progressLabel=_progressLabel - In the implementation block
@property (nonatomic,retain) UIImageView * viewedIcon;                                                         //@synthesize viewedIcon=_viewedIcon - In the implementation block
@property (assign,nonatomic) BOOL animatingHighlight;                                                          //@synthesize animatingHighlight=_animatingHighlight - In the implementation block
@property (nonatomic,retain) SCPieSliceView * pieSliceView;                                                    //@synthesize pieSliceView=_pieSliceView - In the implementation block
@property (assign,nonatomic,__weak) id<SCProfileV3IndividualStoryCellViewDelegate> storyDelegate;              //@synthesize storyDelegate=_storyDelegate - In the implementation block
@property (nonatomic,readonly) SCStoryIconView * storyIconView;                                                //@synthesize storyIconView=_storyIconView - In the implementation block
@property (nonatomic,retain) SCProfileV3IndividualStoryCellViewModel * viewModel;                              //@synthesize viewModel=_viewModel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)cellReuseIdentifier;
-(Story *)story;
-(void)setStory:(Story *)arg1 ;
-(UIButton *)viewersButton;
-(void)willDisplayCell;
-(void)setStoryDelegate:(id<SCProfileV3IndividualStoryCellViewDelegate>)arg1 ;
-(id<SCProfileV3IndividualStoryCellViewDelegate>)storyDelegate;
-(SCPieSliceView *)pieSliceView;
-(SCStoryIconView *)storyIconView;
-(void)savePressed;
-(void)setSingleIconConfigurer:(SCSingleIconConfigurer *)arg1 ;
-(void)setPieSliceView:(SCPieSliceView *)arg1 ;
-(id)stringFromCount:(unsigned long long)arg1 singularForm:(id)arg2 pluralForm:(id)arg3 ;
-(void)setCountsLabels:(id)arg1 ;
-(UIImageView *)viewedIcon;
-(UILabel *)viewedCountLabel;
-(void)setScreenshotCountHidden:(BOOL)arg1 viewCountHidden:(BOOL)arg2 ;
-(id)_viewedCountForViewModel:(id)arg1 ;
-(id)_screenShotCountForViewModel:(id)arg1 ;
-(void)setPreviousStory:(Story *)arg1 ;
-(Story *)previousStory;
-(void)_updateStatusText:(id)arg1 date:(id)arg2 showTimestamp:(BOOL)arg3 isRefresh:(BOOL)arg4 textColor:(id)arg5 ;
-(SCSingleIconConfigurer *)singleIconConfigurer;
-(void)setCountsDisplayHidden:(BOOL)arg1 ;
-(void)_remakeDynamicViewConstraintsForStory:(id)arg1 ;
-(UIImageView *)screenshotIcon;
-(UILabel *)screenshotCountLabel;
-(void)viewersPressed;
-(id)_createViewedIcon;
-(id)_createViewedCountLabel;
-(id)_createScreenShotIcon;
-(void)_constrainScreenShotIcon:(id)arg1 viewedIcon:(id)arg2 ;
-(id)_createScreenshotCountLabel;
-(void)_constrainScreenShotCountLabel:(id)arg1 ;
-(id)thumbnailIcon;
-(id)thumbnailLayer;
-(double)getPercent:(id)arg1 ;
-(void)_setAlpha:(double)arg1 forViews:(id)arg2 ;
-(SCLoadingIndicatorView *)saveAndDeleteActivityIndicator;
-(void)setSaveAndDeleteActivityIndicator:(SCLoadingIndicatorView *)arg1 ;
-(void)setScreenshotCountLabel:(UILabel *)arg1 ;
-(void)setScreenshotIcon:(UIImageView *)arg1 ;
-(void)setViewersButton:(UIButton *)arg1 ;
-(void)setViewedCountLabel:(UILabel *)arg1 ;
-(void)setViewedIcon:(UIImageView *)arg1 ;
-(BOOL)animatingHighlight;
-(void)setAnimatingHighlight:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(double)cornerRadius;
-(id)backgroundColor;
-(void)setHidden:(BOOL)arg1 ;
-(NSString *)description;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)prepareForReuse;
-(id)accessibilityElements;
-(UIColor *)primaryColor;
-(void)tap:(id)arg1 ;
-(void)setPrimaryColor:(UIColor *)arg1 ;
-(void)setSecondaryColor:(UIColor *)arg1 ;
-(UIColor *)secondaryColor;
-(void)_longPress:(id)arg1 ;
-(SCProfileV3IndividualStoryCellViewModel *)viewModel;
-(void)setViewModel:(SCProfileV3IndividualStoryCellViewModel *)arg1 ;
-(UIButton *)saveButton;
-(UIButton *)deleteButton;
-(void)setSaveButton:(UIButton *)arg1 ;
-(void)setDeleteButton:(UIButton *)arg1 ;
-(void)deletePressed;
-(UILabel *)captionLabel;
-(void)setCaptionLabel:(UILabel *)arg1 ;
-(UILabel *)subLabel;
-(void)setSubLabel:(UILabel *)arg1 ;
-(void)setProgressLabel:(UILabel *)arg1 ;
-(UILabel *)progressLabel;
-(CGRect)thumbnailRect;
@end

