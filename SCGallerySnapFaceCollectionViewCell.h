/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:35 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCGallerySnapCollectionViewCell.h>

@class NSArray, UIView, UILabel, UIButton;

@interface SCGallerySnapFaceCollectionViewCell : SCGallerySnapCollectionViewCell {

	BOOL _shouldCrop;
	BOOL _showOverlayView;
	BOOL _showFeedbackView;
	NSArray* _boundingBoxes;
	UIView* _overlayView;
	UILabel* _overlayLabel;
	UIView* _feedbackView;
	UIButton* _correctButton;
	UIButton* _missedFaceButton;
	UIButton* _notAFaceButton;

}

@property (nonatomic,retain) UIView * overlayView;                     //@synthesize overlayView=_overlayView - In the implementation block
@property (nonatomic,retain) UILabel * overlayLabel;                   //@synthesize overlayLabel=_overlayLabel - In the implementation block
@property (nonatomic,retain) UIView * feedbackView;                    //@synthesize feedbackView=_feedbackView - In the implementation block
@property (nonatomic,retain) UIButton * correctButton;                 //@synthesize correctButton=_correctButton - In the implementation block
@property (nonatomic,retain) UIButton * missedFaceButton;              //@synthesize missedFaceButton=_missedFaceButton - In the implementation block
@property (nonatomic,retain) UIButton * notAFaceButton;                //@synthesize notAFaceButton=_notAFaceButton - In the implementation block
@property (nonatomic,retain) NSArray * boundingBoxes;                  //@synthesize boundingBoxes=_boundingBoxes - In the implementation block
@property (assign,nonatomic) BOOL shouldCrop;                          //@synthesize shouldCrop=_shouldCrop - In the implementation block
@property (assign,nonatomic) BOOL showOverlayView;                     //@synthesize showOverlayView=_showOverlayView - In the implementation block
@property (assign,nonatomic) BOOL showFeedbackView;                    //@synthesize showFeedbackView=_showFeedbackView - In the implementation block
-(void)updateButtonSelectStates;
-(void)setBoundingBoxes:(NSArray *)arg1 ;
-(void)setShouldCrop:(BOOL)arg1 ;
-(void)setGallerySnap:(id)arg1 withUserSession:(id)arg2 ;
-(UILabel *)overlayLabel;
-(void)setOverlayLabel:(UILabel *)arg1 ;
-(void)setupOverlayView;
-(void)updateFeedback;
-(BOOL)shouldCrop;
-(id)croppedImage:(id)arg1 ;
-(void)didTapCorrect:(id)arg1 ;
-(void)didTapMissedFace:(id)arg1 ;
-(void)didTapNotAFace:(id)arg1 ;
-(void)setShowOverlayView:(BOOL)arg1 ;
-(void)setShowFeedbackView:(BOOL)arg1 ;
-(BOOL)showOverlayView;
-(BOOL)showFeedbackView;
-(UIButton *)correctButton;
-(void)setCorrectButton:(UIButton *)arg1 ;
-(UIButton *)missedFaceButton;
-(void)setMissedFaceButton:(UIButton *)arg1 ;
-(UIButton *)notAFaceButton;
-(void)setNotAFaceButton:(UIButton *)arg1 ;
-(NSArray *)boundingBoxes;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setImage:(id)arg1 ;
-(UIView *)feedbackView;
-(void)setFeedbackView:(UIView *)arg1 ;
-(void)setOverlayView:(UIView *)arg1 ;
-(UIView *)overlayView;
@end

