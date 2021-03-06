/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:53 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCPopupViewController.h>

@class TrophyView, UILabel, SOJUIdentityTrophy;

@interface TrophyDescriptionViewController : SCPopupViewController {

	TrophyView* _currentTrophyView;
	UILabel* _descriptionLabel;
	SOJUIdentityTrophy* _trophyResponse;
	double _compressHeightRatio;

}

@property (assign) double compressHeightRatio;                                 //@synthesize compressHeightRatio=_compressHeightRatio - In the implementation block
@property (nonatomic,retain) SOJUIdentityTrophy * trophyResponse;              //@synthesize trophyResponse=_trophyResponse - In the implementation block
-(double)getHeight;
-(void)initBackgroundTint;
-(void)dismissPopupViewController:(id)arg1 ;
-(void)setTrophyResponse:(SOJUIdentityTrophy *)arg1 ;
-(void)setCompressHeightRatio:(double)arg1 ;
-(double)compressHeightRatio;
-(void)initPopupView;
-(void)initViewWithTrophies;
-(SOJUIdentityTrophy *)trophyResponse;
-(double)_minimumTrophyFontSize;
-(void)viewTrophy:(id)arg1 ;
-(id)initWithTrophy:(id)arg1 ;
-(void)loadView;
-(void)viewDidAppear:(BOOL)arg1 ;
-(double)getWidth;
@end

