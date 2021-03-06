/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:47 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface AspectsContainer : NSObject {

	NSArray* _beforeAspects;
	NSArray* _insteadAspects;
	NSArray* _afterAspects;

}

@property (copy) NSArray * beforeAspects;               //@synthesize beforeAspects=_beforeAspects - In the implementation block
@property (copy) NSArray * insteadAspects;              //@synthesize insteadAspects=_insteadAspects - In the implementation block
@property (copy) NSArray * afterAspects;                //@synthesize afterAspects=_afterAspects - In the implementation block
-(NSArray *)beforeAspects;
-(NSArray *)insteadAspects;
-(NSArray *)afterAspects;
-(void)setBeforeAspects:(NSArray *)arg1 ;
-(void)setInsteadAspects:(NSArray *)arg1 ;
-(void)setAfterAspects:(NSArray *)arg1 ;
-(BOOL)hasAspects;
-(void)addAspect:(id)arg1 withOptions:(unsigned long long)arg2 ;
-(BOOL)removeAspect:(id)arg1 ;
-(id)description;
@end

