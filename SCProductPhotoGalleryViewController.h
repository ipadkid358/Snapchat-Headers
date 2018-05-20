/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:32 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UIPageViewControllerDataSource.h>
#import <UIKit/UIPageViewControllerDelegate.h>
#import <Snapchat/NYTPhotoViewControllerDelegate.h>

@protocol SCProductPhotoGalleryViewControllerDelegate, NYTPhotosViewControllerDataSource;
@class UIPageViewController, NYTPhotoTransitionController, UIPanGestureRecognizer, UITapGestureRecognizer, UIPageControl, NSNotificationCenter, NYTPhotoViewController, UIView, NSString;

@interface SCProductPhotoGalleryViewController : UIViewController <UIPageViewControllerDataSource, UIPageViewControllerDelegate, NYTPhotoViewControllerDelegate> {

	id<SCProductPhotoGalleryViewControllerDelegate> _delegate;
	id<NYTPhotosViewControllerDataSource> _dataSource;
	UIPageViewController* _pageViewController;
	NYTPhotoTransitionController* _transitionController;
	UIPanGestureRecognizer* _panGestureRecognizer;
	UITapGestureRecognizer* _singleTapGestureRecognizer;
	UIPageControl* _pageControl;
	NSNotificationCenter* _notificationCenter;

}

@property (nonatomic,retain) id<NYTPhotosViewControllerDataSource> dataSource;                             //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,retain) UIPageViewController * pageViewController;                                    //@synthesize pageViewController=_pageViewController - In the implementation block
@property (nonatomic,retain) NYTPhotoTransitionController * transitionController;                          //@synthesize transitionController=_transitionController - In the implementation block
@property (nonatomic,retain) UIPanGestureRecognizer * panGestureRecognizer;                                //@synthesize panGestureRecognizer=_panGestureRecognizer - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * singleTapGestureRecognizer;                          //@synthesize singleTapGestureRecognizer=_singleTapGestureRecognizer - In the implementation block
@property (nonatomic,readonly) NYTPhotoViewController * currentPhotoViewController; 
@property (nonatomic,readonly) UIView * referenceViewForCurrentPhoto; 
@property (nonatomic,readonly) CGPoint boundsCenterPoint; 
@property (nonatomic,retain) UIPageControl * pageControl;                                                  //@synthesize pageControl=_pageControl - In the implementation block
@property (nonatomic,retain) NSNotificationCenter * notificationCenter;                                    //@synthesize notificationCenter=_notificationCenter - In the implementation block
@property (nonatomic,readonly) id<NYTPhoto> currentlyDisplayedPhoto; 
@property (assign,nonatomic,__weak) id<SCProductPhotoGalleryViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UITapGestureRecognizer *)singleTapGestureRecognizer;
-(void)setSingleTapGestureRecognizer:(UITapGestureRecognizer *)arg1 ;
-(void)photoViewController:(id)arg1 didLongPressWithGestureRecognizer:(id)arg2 ;
-(id)initWithPhotos:(id)arg1 initialImageIndex:(long long)arg2 delegate:(id)arg3 ;
-(void)updatePhoto:(id)arg1 ;
-(void)commonInitWithPhotos:(id)arg1 initialImageIndex:(long long)arg2 delegate:(id)arg3 ;
-(UIView *)referenceViewForCurrentPhoto;
-(id<NYTPhoto>)currentlyDisplayedPhoto;
-(NYTPhotoViewController *)currentPhotoViewController;
-(void)dismissViewControllerAnimated:(BOOL)arg1 userInitiated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)didPanWithGestureRecognizer:(id)arg1 ;
-(void)didSingleTapWithGestureRecognizer:(id)arg1 ;
-(void)setupPageViewControllerWithInitialPhoto:(id)arg1 ;
-(id)newPhotoViewControllerForPhoto:(id)arg1 ;
-(void)setCurrentlyDisplayedViewController:(id)arg1 animated:(BOOL)arg2 ;
-(CGPoint)boundsCenterPoint;
-(void)didNavigateToPhoto:(id)arg1 ;
-(id)initWithPhotos:(id)arg1 initialImageIndex:(long long)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setDataSource:(id<NYTPhotosViewControllerDataSource>)arg1 ;
-(void)setDelegate:(id<SCProductPhotoGalleryViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<NYTPhotosViewControllerDataSource>)dataSource;
-(id<SCProductPhotoGalleryViewControllerDelegate>)delegate;
-(UIPanGestureRecognizer *)panGestureRecognizer;
-(BOOL)prefersStatusBarHidden;
-(long long)preferredStatusBarUpdateAnimation;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)dismissViewControllerAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)viewDidLoad;
-(UIPageControl *)pageControl;
-(void)pageViewController:(id)arg1 didFinishAnimating:(BOOL)arg2 previousViewControllers:(id)arg3 transitionCompleted:(BOOL)arg4 ;
-(id)pageViewController:(id)arg1 viewControllerBeforeViewController:(id)arg2 ;
-(id)pageViewController:(id)arg1 viewControllerAfterViewController:(id)arg2 ;
-(id)initWithPhotos:(id)arg1 ;
-(void)setTransitionController:(NYTPhotoTransitionController *)arg1 ;
-(NYTPhotoTransitionController *)transitionController;
-(void)setNotificationCenter:(NSNotificationCenter *)arg1 ;
-(NSNotificationCenter *)notificationCenter;
-(void)setPageControl:(UIPageControl *)arg1 ;
-(void)setPanGestureRecognizer:(UIPanGestureRecognizer *)arg1 ;
-(UIPageViewController *)pageViewController;
-(void)setPageViewController:(UIPageViewController *)arg1 ;
@end

