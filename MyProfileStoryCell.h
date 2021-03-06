/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:44 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCStoriesSelectableCell.h>

@protocol MyProfileStoryCellDelegate;
@class SCSingleIconViewBase, SCLoadingIndicatorView, UILabel, UIImageView, UIButton, Story, SCSingleIconConfigurer, SCPieSliceView;

@interface MyProfileStoryCell : SCStoriesSelectableCell {

	BOOL _isDarkThemed;
	BOOL _animatingHighlight;
	id<MyProfileStoryCellDelegate> _delegate;
	SCSingleIconViewBase* _singleIconView;
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

@property (nonatomic,retain) SCLoadingIndicatorView * saveAndDeleteActivityIndicator;              //@synthesize saveAndDeleteActivityIndicator=_saveAndDeleteActivityIndicator - In the implementation block
@property (nonatomic,retain) UILabel * captionLabel;                                               //@synthesize captionLabel=_captionLabel - In the implementation block
@property (nonatomic,retain) UILabel * screenshotCountLabel;                                       //@synthesize screenshotCountLabel=_screenshotCountLabel - In the implementation block
@property (nonatomic,retain) UIImageView * screenshotIcon;                                         //@synthesize screenshotIcon=_screenshotIcon - In the implementation block
@property (nonatomic,retain) UIButton * saveButton;                                                //@synthesize saveButton=_saveButton - In the implementation block
@property (nonatomic,retain) UIButton * deleteButton;                                              //@synthesize deleteButton=_deleteButton - In the implementation block
@property (nonatomic,retain) UIButton * viewersButton;                                             //@synthesize viewersButton=_viewersButton - In the implementation block
@property (nonatomic,retain) Story * story;                                                        //@synthesize story=_story - In the implementation block
@property (nonatomic,retain) Story * previousStory;                                                //@synthesize previousStory=_previousStory - In the implementation block
@property (nonatomic,retain) UILabel * subLabel;                                                   //@synthesize subLabel=_subLabel - In the implementation block
@property (nonatomic,retain) SCSingleIconViewBase * singleIconView;                                //@synthesize singleIconView=_singleIconView - In the implementation block
@property (nonatomic,retain) SCSingleIconConfigurer * singleIconConfigurer;                        //@synthesize singleIconConfigurer=_singleIconConfigurer - In the implementation block
@property (nonatomic,retain) UILabel * viewedCountLabel;                                           //@synthesize viewedCountLabel=_viewedCountLabel - In the implementation block
@property (nonatomic,retain) UILabel * progressLabel;                                              //@synthesize progressLabel=_progressLabel - In the implementation block
@property (nonatomic,retain) UIImageView * viewedIcon;                                             //@synthesize viewedIcon=_viewedIcon - In the implementation block
@property (assign,nonatomic) BOOL animatingHighlight;                                              //@synthesize animatingHighlight=_animatingHighlight - In the implementation block
@property (nonatomic,retain) SCPieSliceView * pieSliceView;                                        //@synthesize pieSliceView=_pieSliceView - In the implementation block
@property (assign,nonatomic,__weak) id<MyProfileStoryCellDelegate> delegate;                       //@synthesize delegate=_delegate - In the implementation block
-(Story *)story;
-(void)setStory:(Story *)arg1 ;
-(UIButton *)viewersButton;
-(SCPieSliceView *)pieSliceView;
-(void)updateWithStory:(id)arg1 controlEnabled:(BOOL)arg2 associatedStories:(id)arg3 ;
-(SCSingleIconViewBase *)singleIconView;
-(id)initWithStyle:(long long)arg1 isDarkThemed:(BOOL)arg2 reuseIdentifier:(id)arg3 ;
-(void)savePressed;
-(void)setSingleIconConfigurer:(SCSingleIconConfigurer *)arg1 ;
-(void)setPieSliceView:(SCPieSliceView *)arg1 ;
-(UIImageView *)viewedIcon;
-(UILabel *)viewedCountLabel;
-(void)setScreenshotCountHidden:(BOOL)arg1 viewCountHidden:(BOOL)arg2 ;
-(void)setPreviousStory:(Story *)arg1 ;
-(Story *)previousStory;
-(SCSingleIconConfigurer *)singleIconConfigurer;
-(void)setCountsDisplayHidden:(BOOL)arg1 ;
-(void)_remakeDynamicViewConstraintsForStory:(id)arg1 ;
-(UIImageView *)screenshotIcon;
-(UILabel *)screenshotCountLabel;
-(void)viewersPressed;
-(id)thumbnailIcon;
-(id)thumbnailLayer;
-(double)getPercent:(id)arg1 ;
-(SCLoadingIndicatorView *)saveAndDeleteActivityIndicator;
-(void)setSaveAndDeleteActivityIndicator:(SCLoadingIndicatorView *)arg1 ;
-(void)setScreenshotCountLabel:(UILabel *)arg1 ;
-(void)setScreenshotIcon:(UIImageView *)arg1 ;
-(void)setViewersButton:(UIButton *)arg1 ;
-(void)setViewedCountLabel:(UILabel *)arg1 ;
-(void)setViewedIcon:(UIImageView *)arg1 ;
-(BOOL)animatingHighlight;
-(void)setAnimatingHighlight:(BOOL)arg1 ;
-(void)setSingleIconView:(SCSingleIconViewBase *)arg1 ;
-(void)_updateStatusText:(id)arg1 date:(id)arg2 showTimestamp:(BOOL)arg3 isRefresh:(BOOL)arg4 ;
-(void)setPressedState:(BOOL)arg1 ;
-(void)setDelegate:(id<MyProfileStoryCellDelegate>)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(id<MyProfileStoryCellDelegate>)delegate;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(void)prepareForReuse;
-(id)defaultBackgroundColor;
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

