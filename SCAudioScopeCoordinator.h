/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:17 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCScopeCoordinator.h>

@class SCLazy, SCSystemScope, SCScopeExposer;

@interface SCAudioScopeCoordinator : SCScopeCoordinator {

	SCLazy* _lazyAudioSession;
	SCSystemScope* _systemScope;
	SCScopeExposer* _audioScopeExposer;

}

@property (assign,nonatomic,__weak) SCSystemScope * systemScope;              //@synthesize systemScope=_systemScope - In the implementation block
@property (nonatomic,retain) SCScopeExposer * audioScopeExposer;              //@synthesize audioScopeExposer=_audioScopeExposer - In the implementation block
-(SCSystemScope *)systemScope;
-(void)setSystemScope:(SCSystemScope *)arg1 ;
-(SCScopeExposer *)audioScopeExposer;
-(void)setAudioScopeExposer:(SCScopeExposer *)arg1 ;
-(void)begin;
@end

