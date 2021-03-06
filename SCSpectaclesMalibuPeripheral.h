/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:16 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCSpectaclesBleStreamDelegate.h>
#import <Snapchat/SCLagunaMalibuMessageBufferDelegate.h>
#import <Snapchat/SCSpectaclesPeripheral.h>

@protocol SCSpectaclesPeripheralDelegate;
@class CBPeripheral, NSNumber, SCSpectaclesBleStream, SCLagunaMalibuNordicMessageBuffer, SCSpectaclesAEADPacketEncryptor, NSMutableDictionary, SCLagunaRequestMessage, NSString;

@interface SCSpectaclesMalibuPeripheral : NSObject <SCSpectaclesBleStreamDelegate, SCLagunaMalibuMessageBufferDelegate, SCSpectaclesPeripheral> {

	unsigned char _nextFreeRequestId;
	id<SCSpectaclesPeripheralDelegate> _delegate;
	CBPeripheral* _peripheral;
	NSNumber* _RSSI;
	SCSpectaclesBleStream* _stream;
	SCLagunaMalibuNordicMessageBuffer* _messageBuffer;
	SCSpectaclesAEADPacketEncryptor* _encryptor;
	NSMutableDictionary* _outstandingRequests;
	SCLagunaRequestMessage* _outstandingNonceExchangeMessage;

}

@property (assign,nonatomic,__weak) id<SCSpectaclesPeripheralDelegate> delegate;                    //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) CBPeripheral * peripheral;                                             //@synthesize peripheral=_peripheral - In the implementation block
@property (nonatomic,retain) NSNumber * RSSI;                                                       //@synthesize RSSI=_RSSI - In the implementation block
@property (nonatomic,retain) SCSpectaclesBleStream * stream;                                        //@synthesize stream=_stream - In the implementation block
@property (nonatomic,retain) SCLagunaMalibuNordicMessageBuffer * messageBuffer;                     //@synthesize messageBuffer=_messageBuffer - In the implementation block
@property (nonatomic,retain) SCSpectaclesAEADPacketEncryptor * encryptor;                           //@synthesize encryptor=_encryptor - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * outstandingRequests;                             //@synthesize outstandingRequests=_outstandingRequests - In the implementation block
@property (nonatomic,retain) SCLagunaRequestMessage * outstandingNonceExchangeMessage;              //@synthesize outstandingNonceExchangeMessage=_outstandingNonceExchangeMessage - In the implementation block
@property (assign,nonatomic) unsigned char nextFreeRequestId;                                       //@synthesize nextFreeRequestId=_nextFreeRequestId - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SCSpectaclesAEADPacketEncryptor *)encryptor;
-(void)setEncryptor:(SCSpectaclesAEADPacketEncryptor *)arg1 ;
-(void)sendEncryptionRequest:(id)arg1 ;
-(SCLagunaMalibuNordicMessageBuffer *)messageBuffer;
-(void)messageBufferReceivedData:(id)arg1 messageType:(unsigned char)arg2 ;
-(void)openStream;
-(void)setupEncryptionWithKey:(id)arg1 ;
-(id)initWithPeripheral:(id)arg1 delegate:(id)arg2 ;
-(void)setMessageBuffer:(SCLagunaMalibuNordicMessageBuffer *)arg1 ;
-(void)streamDidReadData:(id)arg1 ;
-(void)streamDidError:(id)arg1 ;
-(void)streamDidOpen;
-(void)setOutstandingNonceExchangeMessage:(SCLagunaRequestMessage *)arg1 ;
-(SCLagunaRequestMessage *)outstandingNonceExchangeMessage;
-(unsigned char)nextFreeRequestId;
-(void)setNextFreeRequestId:(unsigned char)arg1 ;
-(id)_rpcClientError;
-(void)_handleEncryptionSetupResponse:(id)arg1 ;
-(void)_handlePushResponseData:(id)arg1 ;
-(void)_handleRpcResponseData:(id)arg1 ;
-(void)setDelegate:(id<SCSpectaclesPeripheralDelegate>)arg1 ;
-(id<SCSpectaclesPeripheralDelegate>)delegate;
-(NSMutableDictionary *)outstandingRequests;
-(void)setOutstandingRequests:(NSMutableDictionary *)arg1 ;
-(void)setRSSI:(NSNumber *)arg1 ;
-(NSNumber *)RSSI;
-(CBPeripheral *)peripheral;
-(void)sendRequest:(id)arg1 ;
-(void)peripheral:(id)arg1 didReadRSSI:(id)arg2 error:(id)arg3 ;
-(void)setPeripheral:(CBPeripheral *)arg1 ;
-(SCSpectaclesBleStream *)stream;
-(void)setStream:(SCSpectaclesBleStream *)arg1 ;
@end

