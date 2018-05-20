/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:18 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <UIKit/UIViewController.h>
#import <Snapchat/SCLSScrubberViewDelegate.h>

@class SCLSScrubberView, AVPlayerLayer, AVPlayer, NSURL, NSString;

@interface SCLSPlayerViewController : UIViewController <SCLSScrubberViewDelegate> {

	SCLSScrubberView* _scrubberView;
	AVPlayerLayer* _playerLayer;
	AVPlayer* _avPlayer;
	NSURL* _url;

}

@property (nonatomic,retain) SCLSScrubberView * scrubberView;              //@synthesize scrubberView=_scrubberView - In the implementation block
@property (nonatomic,retain) AVPlayerLayer * playerLayer;                  //@synthesize playerLayer=_playerLayer - In the implementation block
@property (nonatomic,retain) AVPlayer * avPlayer;                          //@synthesize avPlayer=_avPlayer - In the implementation block
@property (nonatomic,retain) NSURL * url;                                  //@synthesize url=_url - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_didSwipeDown:(id)arg1 ;
-(CGRect)_mainPlayerFrame;
-(CGRect)_scrubberFrame;
-(void)scrubberViewDidUpdatePosition:(float)arg1 ;
-(NSURL *)url;
-(BOOL)prefersStatusBarHidden;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(id)initWithURL:(id)arg1 ;
-(void)setUrl:(NSURL *)arg1 ;
-(SCLSScrubberView *)scrubberView;
-(AVPlayer *)avPlayer;
-(void)_playerItemDidReachEnd:(id)arg1 ;
-(void)setAvPlayer:(AVPlayer *)arg1 ;
-(void)setScrubberView:(SCLSScrubberView *)arg1 ;
-(AVPlayerLayer *)playerLayer;
-(void)setPlayerLayer:(AVPlayerLayer *)arg1 ;
@end

