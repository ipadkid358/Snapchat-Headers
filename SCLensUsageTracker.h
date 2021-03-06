/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:38 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCLensUIUpdateListener.h>
#import <Snapchat/LSAEffectComponentListener.h>

@class SCUserSession, SCLens, NSMutableSet, NSString;

@interface SCLensUsageTracker : NSObject <SCLensUIUpdateListener, LSAEffectComponentListener> {

	SCUserSession* _userSession;
	SCLens* _selectedLens;
	NSMutableSet* _usedLensIds;

}

@property (nonatomic,retain) NSMutableSet * usedLensIds;              //@synthesize usedLensIds=_usedLensIds - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)effectComponent:(id)arg1 didTurnOnEffectWithId:(id)arg2 features:(unsigned long long)arg3 ;
-(id)initWithUserSession:(id)arg1 ;
-(void)willShowLenses;
-(void)didHideLenses;
-(void)didUpdateActiveLensOrder:(id)arg1 ;
-(void)didSelectLens:(id)arg1 ;
-(void)willDisplayLens:(id)arg1 ;
-(void)didEndDisplayingLens:(id)arg1 ;
-(BOOL)wasLensUsedBefore:(id)arg1 ;
-(NSMutableSet *)usedLensIds;
-(void)trackLensWasUsed:(id)arg1 ;
-(void)setUsedLensIds:(NSMutableSet *)arg1 ;
@end

