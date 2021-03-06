/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:07 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PINOperationReference;
@class NSMutableArray, NSString;

@interface PINOperation : NSObject {

	/*^block*/id _block;
	id<PINOperationReference> _reference;
	unsigned long long _priority;
	NSMutableArray* _completions;
	NSString* _identifier;
	id _data;

}

@property (nonatomic,copy) id block;                                           //@synthesize block=_block - In the implementation block
@property (nonatomic,retain) id<PINOperationReference> reference;              //@synthesize reference=_reference - In the implementation block
@property (assign,nonatomic) unsigned long long priority;                      //@synthesize priority=_priority - In the implementation block
@property (nonatomic,retain) NSMutableArray * completions;                     //@synthesize completions=_completions - In the implementation block
@property (nonatomic,retain) NSString * identifier;                            //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) id data;                                          //@synthesize data=_data - In the implementation block
+(id)operationWithBlock:(/*^block*/id)arg1 reference:(id)arg2 priority:(unsigned long long)arg3 identifier:(id)arg4 data:(id)arg5 completion:(/*^block*/id)arg6 ;
-(NSString *)identifier;
-(id)data;
-(void)setData:(id)arg1 ;
-(unsigned long long)priority;
-(void)setPriority:(unsigned long long)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)addCompletion:(/*^block*/id)arg1 ;
-(NSMutableArray *)completions;
-(void)setBlock:(id)arg1 ;
-(id)block;
-(void)setCompletions:(NSMutableArray *)arg1 ;
-(id<PINOperationReference>)reference;
-(void)setReference:(id<PINOperationReference>)arg1 ;
@end

