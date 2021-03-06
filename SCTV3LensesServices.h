/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:53 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCLensCarouselPresenterDelegate.h>
#import <Snapchat/SCLensHintPresenterDelegate.h>
#import <Snapchat/SCTV3LensesServices.h>

@protocol SCTV3LensesServices <NSObject>
@required
-(id)lensesCarouselContainer;
-(id)lensesLabelContainer;
-(BOOL)lensesProcessingEnabled;
-(void)setLensesProcessingEnabled:(BOOL)arg1;
-(void)setListener:(id)arg1;
-(void)setCameraType:(unsigned long long)arg1;

@end


@protocol SCTV3LensesServicesListener, SCLensProcessingCore;
@class SCUserSession, SCLensDataProvider, NSString, SCLensValidator, SCLensCarouselPresenter, SCLensHintPresenter, SCLensLayoutProvider, SCLensUIUpdateListenerAnnouncer, UICollectionView, UILabel;

@interface SCTV3LensesServices : NSObject <SCLensCarouselPresenterDelegate, SCLensHintPresenterDelegate, SCTV3LensesServices> {

	SCUserSession* _userSession;
	SCLensDataProvider* _lensDataProvider;
	NSString* _lensDataProviderToken;
	SCLensValidator* _lensValidator;
	SCLensCarouselPresenter* _carouselPresenter;
	SCLensHintPresenter* _hintPresenter;
	SCLensLayoutProvider* _layoutProvider;
	SCLensUIUpdateListenerAnnouncer* _uiUpdateAnnouncer;
	id<SCTV3LensesServicesListener> _listener;
	BOOL _processingEnabled;
	id<SCLensProcessingCore> _lensProcessingCore;
	UICollectionView* _lensCollectionView;
	UILabel* _lensHintLabel;

}

@property (nonatomic,retain) UICollectionView * lensCollectionView;              //@synthesize lensCollectionView=_lensCollectionView - In the implementation block
@property (nonatomic,retain) UILabel * lensHintLabel;                            //@synthesize lensHintLabel=_lensHintLabel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithUserSession:(id)arg1 ;
-(id)lensesCarouselContainer;
-(id)lensesLabelContainer;
-(BOOL)lensesProcessingEnabled;
-(void)setLensesProcessingEnabled:(BOOL)arg1 ;
-(void)lensCarouselPresenter:(id)arg1 didSelectLens:(id)arg2 index:(unsigned long long)arg3 originalLensIndex:(unsigned long long)arg4 totalLensesCount:(unsigned long long)arg5 ;
-(BOOL)lensCarouselPresenter:(id)arg1 isLensBeingApplied:(id)arg2 ;
-(void)lensCarouselPresenter:(id)arg1 willDisplayLens:(id)arg2 ;
-(void)lensCarouselPresenter:(id)arg1 didEndDisplayingLens:(id)arg2 ;
-(UICollectionView *)lensCollectionView;
-(void)lensCarouselPresenter:(id)arg1 didScroll:(id)arg2 selectedCellDistance:(double)arg3 selectedLens:(id)arg4 ;
-(void)lensCarouselPresenter:(id)arg1 didEndScrolling:(id)arg2 atLens:(id)arg3 ;
-(void)lensCarouselPresenter:(id)arg1 didUpdateLensesList:(id)arg2 ;
-(BOOL)lensHintPresenterShouldShowHint:(id)arg1 ;
-(void)lensHintPresenterWillShowHint:(id)arg1 ;
-(UILabel *)lensHintLabel;
-(void)lensHintPresenterDidHideHint:(id)arg1 ;
-(void)downloadCurrentLensIfNecessary;
-(BOOL)isRegressorNeeded;
-(void)downloadRegressorIfNecessaryWithCompletion:(/*^block*/id)arg1 ;
-(void)setLensHintLabel:(UILabel *)arg1 ;
-(id)initWithUserSession:(id)arg1 lensProcessingCore:(id)arg2 ;
-(void)initLayoutProvider;
-(void)initCarouselPresenter;
-(void)initHintPresenter;
-(void)setupPropertiesForLensCollectionView:(id)arg1 ;
-(void)setLensCollectionView:(UICollectionView *)arg1 ;
-(void)dealloc;
-(void)setListener:(id)arg1 ;
-(void)setCameraType:(unsigned long long)arg1 ;
@end

